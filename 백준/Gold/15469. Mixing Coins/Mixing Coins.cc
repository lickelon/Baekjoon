#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct coin {
    char mat;
    ll cnt;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        queue<coin> _q;
        stack<coin> _st;
        for(int i = 0; i < n; i++) {
            string s;
            ll c;
            cin >> s >> c;
            _q.push({s[0], c});
        }

        while(!_q.empty()) {
            coin curr = _q.front(); _q.pop();
            if(!_st.empty()) {
                coin bef = _st.top();
                if(curr.mat == bef.mat) {
                    curr.cnt += bef.cnt;
                    _st.pop();
                }
            }
            
            coin q, r;
            q = {curr.mat, curr.cnt/3ll};
            r = {curr.mat, curr.cnt%3ll};
            if(q.cnt != 0) _q.push(q);
            if(r.cnt != 0) _st.push(r);
        }

        ll ans = 0;
        while(!_st.empty()) {
            ans += _st.top().cnt;
            _st.pop();
        }
        cout << ans << "\n";
    }

    return 0;
}