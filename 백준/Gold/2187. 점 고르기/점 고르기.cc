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

    int n, a, b;
    cin >> n >> a >> b;
    vector<pair<int, pii>> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i].second.first >> arr[i].second.second >> arr[i].first;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            auto p = arr[i];
            auto q = arr[j];
            int da = abs(p.second.first - q.second.first);
            int db = abs(p.second.second - q.second.second);
            if(da < a && db < b) {
                ans = max(ans, abs(p.first - q.first));
            }
        }
    }
    cout << ans;

    return 0;
}