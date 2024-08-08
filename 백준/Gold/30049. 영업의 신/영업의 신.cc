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

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> cnt(n+1);
    vector<pii> top(m+1);
    map<pii, int> info;
    int ans = 0;
    auto update = [&](int e, int s, int i) {
        int &a = info[{e,s}];
        a += i;
        if(top[s].second < a) {
            if(cnt[top[s].first] == k) ans--;
            cnt[top[s].first]--;
            cnt[e]++;
            if(cnt[e] == k) ans++;
            top[s] = {e, a};
        }
    };
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < k; j++) {
            int a, b;
            cin >> a >> b;
            update(i, a, b);
        }
    }
    int q;
    cin >> q;
    while(q--) {
        int e, s, i;
        cin >> e >> s >> i;
        update(e, s, i);
        cout << ans << "\n";
    }

    return 0;
}