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

    int n, k;
    cin >> n >> k;
    int sum = 0;
    int ans = -1e9;
    vector<int> arr(n);
    for(int i = 0; i < k; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    ans = max(ans, sum);
    for(int i = k; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        sum -= arr[i-k];
        ans = max(ans, sum);
    }
    cout << ans;
    
    return 0;
}