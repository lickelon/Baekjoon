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

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    stack<char> _st;
    for(auto u : s) {
        while(k > 0 && !_st.empty() && _st.top() < u) {
            k--;
            _st.pop();
        }
        _st.push(u);
    }
    while(k--) {
        _st.pop();
    }

    string ans = "";
    while(!_st.empty()) {
        ans += _st.top();
        _st.pop();
    }
    reverse(all(ans));
    cout << ans;

    return 0;
}