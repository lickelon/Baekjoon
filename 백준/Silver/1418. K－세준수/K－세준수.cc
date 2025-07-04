#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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

    int n, k;
    cin >> n >> k;

    auto primes = sieve(k);
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int temp = i;
        for(auto prime : primes) {
            while(temp % prime == 0) {
                temp /= prime;
            }
        }
        if(temp == 1) ans++;
    }
    cout << ans;


    return 0;
}