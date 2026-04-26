#include <bits/stdc++.h>

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

    stack<int> _st;
    string s;
    cin >> s;
    int temp;
    for(char u : s) {
        switch(u) {
        case '(':
            _st.push(1);
            break;
        case '[':
            _st.push(0);
            break;
        case ')':
            temp = 0;
            while(!_st.empty()) {
                int t = _st.top(); _st.pop();
                if(t > 1) {
                    temp += t;
                }
                else if(t == 1) {
                    temp *= 2;
                    if(temp == 0) temp = 2;
                    _st.push(temp);
                    break;
                }
                else if(t == 0) {
                    cout << "0\n";
                    return 0;
                }
            }
            if(_st.empty()) {
                cout << "0\n";
                return 0;
            }
            break;
        case ']':
            temp = 0;
            while(!_st.empty()) {
                int t = _st.top(); _st.pop();
                if(t > 1) {
                    temp += t;
                }
                else if(t == 0) {
                    temp *= 3;
                    if(temp == 0) temp = 3;
                    _st.push(temp);
                    break;
                }
                else if(t == 1) {
                    cout << "0\n";
                    return 0;
                }
            }
            if(_st.empty()) {
                cout << "0\n";
                return 0;
            }
            break;
        default:
            break;
        }
    }

    int ans = 0;
    while(!_st.empty()) {
        int t = _st.top(); _st.pop();
        if(t <= 1) {
            cout << "0\n";
            return 0;
        }
        ans += t;
    }

    cout << ans << "\n";

    return 0;
}