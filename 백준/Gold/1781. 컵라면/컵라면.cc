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
    for(auto &u : arr) {
        cin >> u.first >> u.second;
    }

    sort(all(arr));

    priority_queue<int> pq;

    for(auto u : arr) {
        pq.push(-u.second);
        if(pq.size() > u.first) {
            pq.pop();
        }
    }

    ll ans = 0;
    while(!pq.empty()) {
        ans += -pq.top();
        pq.pop();
    }

    cout << ans;

    return 0;
}