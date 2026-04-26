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

    while(true) {
        string s;
        getline(cin, s, '\n');
        if(s.length() == 1) break;
        stack<char> _st;
        bool ans = true;
        for(auto u : s) {
            if(u == '(') {
                _st.push(u);
            }
            else if(u == '[') {
                _st.push(u);
            }
            else if(u == ')') {
                if(!_st.empty() && _st.top() == '(') {
                    _st.pop();
                }
                else {
                    ans = false;
                }
            }
            else if(u == ']') {
                if(!_st.empty() && _st.top() == '[') {
                    _st.pop();
                }
                else {
                    ans = false;
                }
            }
        }
        if(ans && _st.empty()) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

    return 0;
}