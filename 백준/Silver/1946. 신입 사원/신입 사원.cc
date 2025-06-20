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

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<pii> arr(n);
        for(auto &[a, b] : arr) cin >> a >> b;
        sort(all(arr));

        int ans = 0;
        int m = INF;
        for(int i = 0; i < n; i++) {
            if(arr[i].second < m) ans++;
            m = min(m, arr[i].second);
        }
        cout << ans << "\n";
    }

    return 0;
}