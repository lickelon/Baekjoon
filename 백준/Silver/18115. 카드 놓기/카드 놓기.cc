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

    deque<int> _dq(n);
    iota(all(_dq), 0);
    stack<int> _st;
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(input == 1) {
            _st.push(_dq.front());
            _dq.pop_front();
        }
        if(input == 2) {
            int temp = _dq.front(); _dq.pop_front();
            _st.push(_dq.front());
            _dq.pop_front();
            _dq.push_front(temp);
        }
        if(input == 3) {
            _st.push(_dq.back());
            _dq.pop_back();
        }
    }

    for(int i = 0; i < n; i++) {
        ans[_st.top()] = i+1;
        _st.pop();
    }

    for(auto e : ans) {
        cout << e << " ";
    }

    return 0;
}