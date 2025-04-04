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

    string s;
    cin >> s;
    stack<char> _st;
    for(auto c : s) {
        if(c == '(') {
            _st.push(c);
        }
        else {
            if(_st.empty()) _st.push(')');
            else if(_st.top() == '(') _st.pop();
            else _st.push(')');
        }
    }
    cout << _st.size();

    return 0;
}