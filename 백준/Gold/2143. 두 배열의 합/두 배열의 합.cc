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

    ll T;
    cin >> T;
    int n;
    cin >> n;
    vector<ll> A(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> A[i];
        A[i] += A[i-1];
    }
    int m;
    cin >> m;
    vector<ll> B(m+1);
    for(int i = 1; i <= m; i++) {
        cin >> B[i];
        B[i] += B[i-1];
    }
    vector<ll> arr1, arr2;
    for(int i = 0; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            arr1.emplace_back(A[j]-A[i]);
        }
    }
    for(int i = 0; i <= m; i++) {
        for(int j = i + 1; j <= m; j++) {
            arr2.emplace_back(B[j]-B[i]);
        }
    }
    sort(all(arr2));

    ll ans = 0;
    for(int i = 0; i < arr1.size(); i++) {
        ll target = T - arr1[i];
        ans += upper_bound(all(arr2), target) - lower_bound(all(arr2), target);
    }
    cout << ans;

    return 0;
}