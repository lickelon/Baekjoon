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

    ll d;
    cin >> d;
    int n;
    cin >> n;
    vector<ll> dist(n+2);
    for(int i = 1; i <= n+1; i++) {
        cin >> dist[i];
        dist[i] += dist[i-1];
    }
    vector<ll> t(n+2);
    for(int i = 1; i <= n; i++) {
        cin >> t[i];
    }
    vector<pll> dp(n+2, {1e12, -1});
    dp[0] = {0, -1};
    for(int i = 1; i <= n+1; i++) {
        for(int j = 0; j < i; j++) {
            if(dist[i]-dist[j] <= d) {
                if(dp[i].first > dp[j].first+t[j]) {
                    dp[i] = {dp[j].first+t[j], j};
                }
            }
        }
    }
    cout << dp[n+1].first << "\n";
    stack<int> _st;
    _st.push(dp[n+1].second);
    while(_st.top() > 0) {
        _st.push(dp[_st.top()].second);
    }
    _st.pop();
    cout << _st.size() << "\n";
    while(!_st.empty()) {
        cout << _st.top() << " ";
        _st.pop();
    }

    return 0;
}