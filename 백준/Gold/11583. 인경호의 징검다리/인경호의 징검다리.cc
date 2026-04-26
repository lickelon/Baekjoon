#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        
        vector<pii> dat(n);
        for(auto &u : dat) {
            int num;
            cin >> num;
            while(num%2==0) {
                u.first++;
                num/=2;
            }
            while(num%5==0) {
                u.second++;
                num /= 5;
            }
        }
        vector<pii> dp(n, {1e9,1e9});
        dp[0] = dat[0];
        for(int i = 1; i < n; i++) {
            for(int j = max(0, i-k); j < i; j++) {
                dp[i].first = min(dp[i].first, dp[j].first + dat[i].first);
                dp[i].second = min(dp[i].second, dp[j].second + dat[i].second);
            }
        }
        cout << min(dp[n-1].first, dp[n-1].second) << "\n";
    }

    return 0;
}