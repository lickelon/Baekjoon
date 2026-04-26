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

    int n;
    cin >> n;
    vector<ll> A(n), B(n), X(n);
    for(auto &u : A) cin >> u;
    for(auto &u : B) cin >> u;
    for(auto &u : X) cin >> u;
    ll ans = 0;
    vector<ll> cnt(n);
    for(int i = 0; i < n; i++) {
        if(abs(B[i] - A[i]) % X[i] != 0) {
            cout << "-1";
            return 0;
        }
        cnt[i] = abs(B[i] - A[i]) / X[i];
        ans = max(ans, cnt[i]);
        if(i > 0 && (cnt[i]-cnt[i-1]) % 2 != 0) {
            cout << "-1";
            return 0;
        }
    }
    cout << ans;

    return 0;
}