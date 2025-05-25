#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define x first
#define y second

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    pii arr[3];
    for(auto &e : arr) cin >> e.x >> e.y;
    int q;
    cin >> q;
    while(q--) {
        pii coord;
        cin >> coord.x >> coord.y;
        int T[3];
        cin >> T[0] >> T[1] >> T[2];

        int ans = INF;
        for(int i = 0; i < 3; i++) {
            int temp = abs(arr[i].x - coord.x) + abs(arr[i].y - coord.y);
            ans = min(ans, ((temp + T[i] - 1)/T[i])*T[i]);
        }
        cout << ans << "\n";
    }

    return 0;
}