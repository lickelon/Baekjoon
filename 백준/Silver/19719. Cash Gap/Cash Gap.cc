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

    int n, m, s;
    cin >> n >> m >> s;
    vector<vector<int>> arr(m+1);
    for(int i = 0; i < n; i++) {
        int c, f, t;
        cin >> c >> f >> t;
        if(c < 0) {
            arr[f].emplace_back(c);
        }
        else if(c > 0) {
            arr[t].emplace_back(c);
        }
    }

    for(int i = 1; i <= m; i++) {
        sort(all(arr[i]));
        for(auto u : arr[i]) {
            s += u;
            if(s < 0) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}