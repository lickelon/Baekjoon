#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> getsfx(string &s) {
    int n = s.size();
    vector<int> sfx(n), g(n+1), ng(n+1);
    for(int i = 0; i < n; i++) {
        sfx[i] = i;
        g[i] = s[i];
    }

    g[n] = -1;
    for(int t = 1; t < n; t <<= 1) {
        auto cmp = [&](int i, int j) {
            if(g[i] == g[j]) return g[i+t] < g[j+t];
            else return g[i] < g[j];
        };
        sort(all(sfx), cmp);
        ng[sfx[0]] = 0;
        ng[n] = -1;
        for(int i = 1; i < n; i++) {
            if(cmp(sfx[i-1], sfx[i])) ng[sfx[i]] = ng[sfx[i-1]] + 1;
            else ng[sfx[i]] = ng[sfx[i-1]];
        }
        g = ng;
    }
    return sfx;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    auto sfx = getsfx(s);
    for(auto u : sfx) {
        cout << u << "\n";
    }

    return 0;
}