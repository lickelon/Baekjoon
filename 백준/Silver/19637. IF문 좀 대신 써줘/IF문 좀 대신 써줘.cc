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
    vector<pair<string,int>> title(n);
    vector<pair<int,int>> power(m);

    for(int i = 0; i < n; i++) {
        cin >> title[i].first >> title[i].second;
    }

    for(int i = 0; i < m; i++) {
        cin >> power[i].first;
        power[i].second = i;
    }

    sort(all(power));

    vector<string> ans(m);
    int idx = 0;
    for(int i = 0; i < m; i++) {
        while(power[i].first > title[idx].second) {
            idx++;
        }
        ans[power[i].second] = title[idx].first;
    }

    for(int i = 0; i < m; i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}