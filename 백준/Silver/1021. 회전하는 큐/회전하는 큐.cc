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

    int n, m;
    cin >> n >> m;
    deque<int> _dq;
    for(int i = 1; i <= n; i++) {
        _dq.emplace_back(i);
    }
    vector<int> arr(m);
    for(auto &u : arr) {
        cin >> u;
    }
    int ans = 0;
    for(auto u : arr) {
        int i;
        for(i = 0; i < _dq.size(); i++) {
            if(_dq[i] == u) break;
        }
        if(i < _dq.size() - i) {
            for(int j = 0; j < i; j++) {
                _dq.push_back(_dq[0]);
                _dq.pop_front();
                ans++;
            }
            _dq.pop_front();
        }
        else {
            for(int j = 0; j < _dq.size() - i; j++) {
                _dq.push_front(_dq[_dq.size()-1]);
                _dq.pop_back();
                ans++;
            }
            _dq.pop_front();
        }
    }
    cout << ans;

    return 0;
}