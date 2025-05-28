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
        ll n;
        cin >> n;
        vector<ll> arr(6);
        for(auto &e : arr) cin >> e;

        int ans = 1;
        while(true) {
            ll sum = 0;
            for(auto e: arr) sum += e;
            if(sum > n) break;
            vector<ll> nxt(6);
            for(int i = 0; i < 6; i++) {
                nxt[i] = arr[i] + arr[(i+5)%6] + arr[(i+1)%6] + arr[(i+3)%6];
            }
            arr = nxt;
            ans += 1;
        }
        cout << ans << "\n";
    }

    return 0;
}