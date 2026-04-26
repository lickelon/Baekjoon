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
    vector<ll> arr(n);
    for(auto &u : arr) cin >> u;
    sort(all(arr));

    int ans = 0;
    for(int i = 0; i < n; i++) {
        i = i;
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            bool check = false;
            int target = arr[i] - arr[j];
            if(min(i,j) > 0) check |= binary_search(&arr[0], &arr[min(i,j)], target);
            if(max(i,j)-1 >= min(i,j)+1) check |= binary_search(&arr[min(i,j)+1], &arr[max(i,j)], target);
            if(max(i,j) < n-1) check |= binary_search(&arr[max(i,j)+1], &arr[n], target);
            if(check) {
                ans++;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}