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
    vector<pii> arr(n);
    vector<int> cnt(n+1);
    priority_queue<pii> _pq;
    priority_queue<int> _seat;
    for(int i = 1; i <= n; i++) {
        _seat.push(-i);
    }
    for(int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(all(arr));
    int ans = 0;
    for(int i = 0; i < n; i++) {
        while(!_pq.empty()) {
            if(-_pq.top().first < arr[i].first) {
                _seat.push(-_pq.top().second);
                _pq.pop();
            }
            else {
                break;
            }
        }
        _pq.push({-arr[i].second,-_seat.top()});
        ans = max(ans, -_seat.top());
        cnt[-_seat.top()]++;
        _seat.pop();
    }
    cout << ans << "\n";
    for(int i = 1; i <= ans; i++) {
        cout << cnt[i] << " ";
    }

    return 0;
}