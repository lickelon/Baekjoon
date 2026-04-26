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

    ll N, M, R;
    cin >> N >> M >> R;
    vector<ll> post(N);
    vector<ll> pole(M);
    for(auto &u : post) cin >> u;
    for(auto &u : pole) cin >> u;
    sort(all(pole));
    ll ans = -1;
    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            ll b = abs(post[i] - post[j]);
            int idx = upper_bound(all(pole), R*2/b) - pole.begin() - 1;
            if(idx == -1) continue;
            ans = max(b * pole[idx], ans);
        }
    }
    if(ans != -1) {
        cout << ans/2;
        if(ans%2) cout << ".5";
        else cout << ".0";
    }
    else cout << -1;

    return 0;
}