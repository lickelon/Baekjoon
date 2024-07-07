#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321
#define int long long

using namespace std;

using ld = long double;
using pii = pair<int,int>;

template <typename T1, typename T2>
istream& operator>>(istream & ist, pair<T1,T2> &p) {
    ist >> p.first >> p.second;
    return ist;
}
template <typename T>
istream& operator>>(istream & ist, vector<T> &arr) {
    for(auto &u : arr) ist >> u;
    return ist;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    cin >> arr;

    set<int> _s;
    for(int i = 0; i < m; i++) {
        _s.insert(arr[i]);
        for(int j = i+1; j < m; j++) {
            _s.insert(arr[i]+arr[j]);
        }
    }

    vector<int> dp(n+1, INF);
    dp[0] = 0;
    for(int i = 0; i < n; i++) {
        for(auto u : _s) {
            int next = i+u;
            if(next <= n) dp[next] = min(dp[next], dp[i] + 1);
        }
    }
    cout << (dp[n] == INF ? -1 : dp[n]); 
    return 0;
}