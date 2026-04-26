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
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    reverse(all(arr));
    stack<int> _st;
    stack<int> ans;
    for(int i = 0; i < n; i++) {
        while(!_st.empty()) {
            if(_st.top() > arr[i]) {
                break;
            }
            _st.pop();
        }
        ans.push(_st.empty() ? -1 : _st.top());
        _st.push(arr[i]);
    }

    while(!ans.empty()) {
        cout << ans.top() << " ";
        ans.pop();
    }

    return 0;
}