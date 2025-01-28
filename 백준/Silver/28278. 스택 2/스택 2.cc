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

    stack<int> _st;
    while(n--) {
        int q;
        cin >> q;
        if(q == 1) {
            int input;
            cin >> input;
            _st.push(input);
        }
        if(q == 2) {
            cout << (_st.empty() ? -1 : _st.top()) << "\n";
            if(!_st.empty()) _st.pop();
        }
        if(q == 3) {
            cout << _st.size() << "\n";
        }
        if(q == 4) {
            cout << (int)_st.empty() << "\n";
        }
        if(q == 5) {
            cout << (_st.empty() ? -1 : _st.top()) << "\n";
        }
    }

    return 0;
}