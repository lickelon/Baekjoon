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
    vector<pii> ans;
    for(int i = 0; i < min(n,m); i++) {
        ans.emplace_back(i,i);
    }
    if(n < m) {
        for(int i = n; i < m; i++) {
            ans.emplace_back(n-1, i);
        }
    }
    else if(n > m) {
        for(int i = m; i < n; i++) {
            ans.emplace_back(i, m-1);
        }
    }
    if(ans.size() % 2) {
        ans.emplace_back(min(n,m)-2, min(n,m)-1);
    }
    sort(all(ans));

    cout << ans.size() * 2 << "\n";
    for(int i = 0; i < ans.size(); i += 2) {
        cout << ans[i].first << " " << ans[i].second << "\n";
        cout << ans[i+1].first << " " << ans[i+1].second << "\n";
        cout << ans[i].first << " " << ans[i].second << "\n";
        cout << ans[i+1].first << " " << ans[i+1].second << "\n";
    }

    return 0;
}