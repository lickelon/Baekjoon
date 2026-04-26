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
    for(int t = 1; t <= T; t++) {
        ll n, k, c, x;
        cin >> n >> k >> c >> x;
        vector<ll> A(n), B(n);
        for(auto &u : A) cin >> u;
        for(auto &u : B) cin >> u;
        ll m[50][50];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                m[i][j] = (A[i]*(i+1) + B[j]*(j+1) + c) % x;
            }
        }
        ll ans = 0;
        for(int i = 0; i <= n - k; i++) {
            for(int j = 0; j <= n - k; j++) {
                ll M = 0;
                for(int di = 0; di < k; di++) {
                    for(int dj = 0; dj < k; dj++) {
                        M = max(M, m[i+di][j+dj]);
                    }
                }
                ans += M;
            }
        }
        cout << "Case #" << t <<": " << ans << "\n";
    }


    return 0;
}