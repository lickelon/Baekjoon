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
    vector<ll> cnt(21);
    for(int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        ll idx = 0;
        while(input) {
            cnt[idx++] += input%2;
            input /= 2;
        }
    }

    ll ans = 0;
    for(int i = 0; i < 21; i++) {
        ans += cnt[i] * (n - cnt[i]) * (1 << i);
    }
    cout << ans;

    return 0;
}