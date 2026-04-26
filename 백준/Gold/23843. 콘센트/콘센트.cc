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

    int n, m;
    cin >> n >> m;
    priority_queue<int> _pq;

    for(int i = 0; i < m; i++) {
        _pq.push(0);
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.rbegin(), arr.rend());
    for(auto u : arr) {
        int t = _pq.top(); _pq.pop();
        t -= u;
        _pq.push(t);
    }
    int ans = 0;
    while(!_pq.empty()) {
        ans = max(ans, -_pq.top());
        _pq.pop();
    }
 
    cout << ans;

    return 0;
}