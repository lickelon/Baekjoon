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
        vector<int> arr(n);
        for(auto &e : arr) cin >> e;
        for(int i = 0; i <= 1000; i++) {
            vector<int> nxt(all(arr));
            for(int i = 0; i < n; i++) {
                nxt[i] = abs(nxt[i] - arr[(i+1)%n]);
            }
            arr = nxt;
        }
        int ans = 0;
        for(auto e : arr) ans += e;
        cout << (ans ? "LOOP" : "ZERO") << "\n";
    }

    return 0;
}