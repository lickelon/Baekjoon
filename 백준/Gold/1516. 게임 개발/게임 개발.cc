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

    int n;
    cin >> n;
    vector<pair<int, vector<int>>> arr(n);
    for(auto &e : arr) {
        cin >> e.first;
        while(true) {
            int input;
            cin >> input;
            if(input == -1) break;
            e.second.emplace_back(input-1);
        }
    }

    vector<int> dp(n, 0);

    function<int(int)> func = [&](int k) -> int{
        if(dp[k]) return dp[k];
        dp[k] = 0;
        for(auto e : arr[k].second) {
            dp[k] = max(dp[k], func(e));
        }
        dp[k] += arr[k].first;
        return dp[k];
    };

    for(int i = 0; i < n; i++) {
        cout << func(i) << "\n";
    }

    return 0;
}