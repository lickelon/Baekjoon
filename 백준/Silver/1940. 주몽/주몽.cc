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

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(all(arr));

    int l = 0, r = n-1;
    int ans = 0;
    while(l < r) {
        int sum = arr[l] + arr[r];
        if(sum == m) {
            ans++;
            l++;
        }
        else if(sum < m) {
            l++;
        }
        else {
            r--;
        }
    }
    cout << ans;

    return 0;
}