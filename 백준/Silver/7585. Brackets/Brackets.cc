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
        getline(cin, s);
        if(s[0] == '#') break;

        stack<int> _st;
        bool flag = true;
        for(int i = 0; i < s.length(); i++) {
            int bnum = 0;
            switch(s[i]) {
                case '(':
                    bnum++;
                case '{':
                    bnum++;
                case '[':
                    bnum++;
                    _st.push(bnum);
                    break;
                
                case ')':
                    bnum++;
                case '}':
                    bnum++;
                case ']':
                    bnum++;
                    if(_st.empty() || _st.top() != bnum) flag = false;
                    else _st.pop();
                    break;

                default:
                    break;
            }
        }
        if(!_st.empty()) flag = false;
        cout << (flag ? "Legal" : "Illegal") << "\n";
    }

    return 0;
}