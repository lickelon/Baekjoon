#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int sieve[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    sieve[0] = 1;
    sieve[1] = 1;
    vector<int> prime;
    for(int i = 2; i <= 1000000; i++) {
        if(sieve[i]) continue;
        prime.emplace_back(i);
        for(int j = i+i; j <= 1000000; j += i) {
            sieve[j] = 1;
        }
    }
    while(T--) {
        int ans = 0;
        int n;
        cin >> n;
        for(auto u : prime) {
            if(u * 2 > n) break;
            if(!sieve[n-u]) ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}