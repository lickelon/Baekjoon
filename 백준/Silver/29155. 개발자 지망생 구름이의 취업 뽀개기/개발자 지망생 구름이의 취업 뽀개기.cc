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
    int goal[5] = {};
    for(int i = 0; i < 5; i++) {
        cin >> goal[i];
    }
    vector<int> p[5];
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        p[a-1].emplace_back(b);
    }
    int ans = 240;
    for(int i = 0; i < 5; i++) {
        sort(all(p[i]));
        for(int j = 1; j < goal[i]; j++) {
            ans += p[i][j];
        }
        ans += p[i][goal[i]-1];
    }
    cout << ans;

    return 0;
}