#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, s;
    cin >> n >> m >> s;
    vector<pii> arr(n+2);
    arr[0] = {-1, 0};
    for(int i = 1; i <= n; i++) {
        cin >> arr[i].first >> arr[i].second;
        arr[i].second += arr[i].first;
    }
    arr[n+1] = {s, s+1};
    sort(all(arr));
    for(int i = 0; i <= n; i++) {
        if(arr[i+1].first - arr[i].second >= m) {
            cout << arr[i].second;
            return 0;
        }
    }
    cout << -1;
    return 0;
}