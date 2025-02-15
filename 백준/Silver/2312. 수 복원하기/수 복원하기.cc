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

    auto primes = sieve(100000);

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        map<int, int> _m;
        for(auto p : primes) {
            while(n % p == 0) {
                _m[p]++;
                n /= p;
            }
        }
        for(auto [k, v] : _m) cout << k << " " << v << "\n";
    }

    return 0;
}