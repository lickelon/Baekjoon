#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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

    map<string, string> member;
    map<string, vector<string>> team;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            string t;
            cin >> t;
            member[t] = s;
            team[s].emplace_back(t);
        }
    }

    for(int i = 0; i < m; i++) {
        string s;
        cin >> s;
        int q;
        cin >> q;
        if(q == 1) cout << member[s] << "\n";
        else {
            sort(all(team[s]));
            for(auto &e : team[s]) cout << e << "\n";
        }
    }

    return 0;
}