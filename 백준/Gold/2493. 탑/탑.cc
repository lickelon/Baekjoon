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
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        while(!_st.empty()) {
            if(_st.top().first >= input) {
                break;
            }
            _st.pop();
        }
        cout << (_st.empty() ? 0 : _st.top().second + 1) << " ";
        _st.push({input, i});
    }

    return 0;
}