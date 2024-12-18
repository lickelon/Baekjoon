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
    for(auto &e : arr) cin >> e;

    int l = 1, r = 1e9+1;
    int ans = INF;
    while(l+1 < r) {
        int mid = (l+r)/2;

        int cnt = 1, curr = mid;
        for(auto e : arr) {
            if(e > mid) {
                cnt = INF;
                break;
            }
            if(curr < e) {
                cnt++;
                curr = mid;
            }
            curr -= e;
        }
        if(cnt > m) l = mid;
        if(cnt <= m){
            r = mid;
            ans = min(ans, mid);
        }
    }
    cout << ans;

    return 0;
}