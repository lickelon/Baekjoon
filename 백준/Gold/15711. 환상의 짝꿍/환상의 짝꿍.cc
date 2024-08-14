#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<ll> sieve(int n) {
    vector<ll> primes;
    vector<bool> check(n+1, true);
    for(int i = 2; i <= n; i++) {
        if(check[i]) {
            primes.emplace_back(i);
            for(int j = i+i; j <= n; j += i) {
                check[j] = false;
            }
        }
    }
    return primes;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    vector<ll> primes = sieve(2e6);
    while(T--) {
        ll a, b;
        cin >> a >> b;
        a += b;
        if(a < 4) {
            cout << "NO\n";
            continue;
        }
        if(a % 2) {
            bool check = true;
            a -= 2;
            for(auto u : primes) {
                if(a != u && a % u == 0) {
                    check = false;
                    break;
                }
            }
            cout << (check ? "YES" : "NO") << "\n";
        }
        else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}