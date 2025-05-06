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
    stack<pii> _st;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int q;
        cin >> q;
        if(q == 1) {
            int a, t;
            cin >> a >> t;
            _st.push({a, t});
        }
        if(_st.empty()) continue;
        _st.top().second -= 1;
        if(_st.top().second == 0) {
            ans += _st.top().first;
            _st.pop();
        }
    }
    cout << ans;

    return 0;
}