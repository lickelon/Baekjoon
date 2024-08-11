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
    vector<array<int, 4>> arr(n);
    for(auto &u : arr) {
        cin >> u[0] >> u[1] >> u[2] >> u[3];
    }
    vector<int> A;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            A.emplace_back(arr[i][0] + arr[j][1]);
        }
    }
    sort(all(A));
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ll sum = arr[i][2] + arr[j][3];
            ans += upper_bound(all(A), -sum) - lower_bound(all(A), -sum);
        }
    }
    cout << ans;

    return 0;
}