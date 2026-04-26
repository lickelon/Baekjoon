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

    for(int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(all(arr));

    int ans = 0;
    priority_queue<int> pq;
    for(int i = 0; i < n; i++) {
        while(!pq.empty() && -pq.top() <= arr[i].first) {
            pq.pop();
        }
        pq.push(-arr[i].second);
        ans = max(ans, (int)pq.size());
    }

    cout << ans;

    return 0;
}