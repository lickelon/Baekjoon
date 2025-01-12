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

    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for(auto &e : arr) cin >> e;
        sort(all(arr));

        int ans = 0;
        for(int i = 0; i < m; i++) {
            int input;
            cin >> input;
            ans += arr.end() - upper_bound(all(arr), input);
        }
        cout << ans << "\n";
    }

    return 0;
}