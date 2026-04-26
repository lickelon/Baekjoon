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

    int n, m;
    cin >> n >> m;

    vector<int> s(n), w(m);
    for(auto & u : s) cin >> u;
    for(auto & u : w) cin >> u;
    sort(all(s));
    sort(all(w));

    bool ans = true;
    int idx = 0;
    for(int i = 0; i < m; i++) {
        while(idx < n && s[idx] < i+1) idx++;
        if(idx >= n) {
            ans = false;
            break;
        }
        while(w[i] && idx < n) {
            w[i]--;
            idx++;
        }

        if(w[i]) {
            ans = false;
            break;
        }
    }

    cout << (ans ? "YES" : "NO");

    return 0;
}