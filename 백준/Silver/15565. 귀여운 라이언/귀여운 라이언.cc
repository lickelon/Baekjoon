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

    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    int cnt = 0;
    int l = -1;
    int ans = INF;
    for(int r = 0; r < n; r++) {
        if(arr[r] == 1) cnt++;
        if(cnt == k) {
            while(arr[l+1] != 1) {
                l++;
            }
            ans = min(ans, r-l);
            l++;
            cnt--;
        }
    }
    cout << (ans == INF ? -1 : ans);

    return 0;
}