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
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;

        while(!_st.empty() && _st.top().first < input) {
            ans += _st.top().second;
            _st.pop();
        }
        if(_st.empty()) {
            _st.push({input, 1});
            continue;
        }
        if(_st.top().first == input) {
            ans += _st.top().second;
            _st.top().second++;
            if(_st.size() > 1) ans++;
        }
        else {
            _st.push({input, 1});
            ans += 1;
        }
    }
    cout << ans;

    return 0;
}