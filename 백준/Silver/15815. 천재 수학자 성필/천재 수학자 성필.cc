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
    
    stack<int> _st;
    for(auto u : s) {
        if('0' <= u && u <= '9') {
            _st.push(u-'0');
        }
        else {
            int a = _st.top(); _st.pop();
            int b = _st.top(); _st.pop();
            switch(u) {
            case '+':
                _st.push(b+a);
                break;
            case '-':
                _st.push(b-a);
                break;
            case '*':
                _st.push(b*a);
                break;
            case '/':
                _st.push(b/a);
                break;
            }
        }
    }
    cout << _st.top();

    return 0;
}