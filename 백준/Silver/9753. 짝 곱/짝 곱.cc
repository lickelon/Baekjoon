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

bool is_prime(vector<ll> &primes, int num) {
    for(auto e : primes) if(e == num) return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    auto primes = sieve(100000);
    int T;
    cin >> T;
    while(T--) {
        int k;
        cin >> k;

        int ans = 0;
        int num = k;
        while(!ans) {
            for(auto e : primes) {
                int d = num / e;
                if(num % e == 0 && is_prime(primes, d) && d != e) {
                    ans = num;
                    break;
                }
            }
            num++;
        }
        cout << ans << "\n";
    }

    return 0;
}