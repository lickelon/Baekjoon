#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct info {
    int s;
    int d;
    int p;
};

bool comp(info& a, info& b) {
    return a.s+a.d < b.s+b.d;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        vector<int> dp(10100);
        int n;
        cin >> n;
        vector<info> arr(n);
        for(auto &u : arr) {
            cin >> u.s >> u.d >> u.p;
        }
        sort(all(arr), comp);

        int idx = 0;
        for(int i = 1; i < 10100; i++) {
            dp[i] = dp[i-1];
            while(arr[idx].s+arr[idx].d == i) {
                dp[i] = max(dp[i], dp[arr[idx].s] + arr[idx].p);
                idx++;
            }
        }
        cout << dp[arr[n-1].s+arr[n-1].d] << "\n";
    }

    return 0;
}