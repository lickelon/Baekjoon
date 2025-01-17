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

    int l;
    cin >> l;
    vector<int> arr(l);
    for(auto &e : arr) cin >> e;
    arr.push_back(0);
    arr.push_back(1001);
    sort(all(arr));

    int n;
    cin >> n;
    for(int i = 1; i < l+2; i++) {
        if(arr[i-1] < n && n < arr[i]) {
            int ans = 0;
            for(int s = arr[i-1] + 1; s < arr[i]-1; s++) {
                for(int e = s + 1; e < arr[i]; e++) {
                    if(s <= n && n <= e) ans++;
                }
            }
            cout << ans;
            return 0;
        }
    }
    cout << 0;

    return 0;
}