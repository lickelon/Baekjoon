#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s, t;
    cin >> s >> t;

    stack<int> _st;
    stack<char> ans;
    map<char, int> _m;
    for(int i = 0; i < t.length(); i++) {
        _m[t[i]] = i+1;
    }

    for(auto c : s) {
        ans.push(c);
        if(!_st.empty()) {
            if(_m[c] == 1 || _m[c]-1 == _st.top()) {
                _st.push(_m[c]);
            }
            else {
                _st.push(_m[c]==1);
            }
        }
        else {
            _st.push(_m[c]==1);
        }
        if(_st.top() == t.length()) {
            for(int i = 0; i < t.length(); i++) {
                _st.pop();
                ans.pop();
            }
        }
    }
    string sa;
    while(!ans.empty()) {
        sa += ans.top();
        ans.pop();
    }
    reverse(all(sa));
    cout << (sa == "" ? "FRULA" : sa);


    return 0;
}