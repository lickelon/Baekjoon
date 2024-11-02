#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> getsa(string &s) {
    int n = s.size();
    vector<int> sa(n), g(n+1), ng(n+1);
    for(int i = 0; i < n; i++) {
        sa[i] = i;
        g[i] = s[i];
    }

    g[n] = -1;
    for(int t = 1; t < n; t <<= 1) {
        auto cmp = [&](int i, int j) {
            if(g[i] == g[j]) return g[i+t] < g[j+t];
            else return g[i] < g[j];
        };
        sort(all(sa), cmp);
        ng[sa[0]] = 0;
        ng[n] = -1;
        for(int i = 1; i < n; i++) {
            if(cmp(sa[i-1], sa[i])) ng[sa[i]] = ng[sa[i-1]] + 1;
            else ng[sa[i]] = ng[sa[i-1]];
        }
        g = ng;
    }
    return sa;
}

vector<int> getlcp(vector<int> &sa, string &s){
    int n = s.size();
    vector<int> lcp(n), isa(n);
    for(int i=0;i<n;++i) isa[sa[i]] = i;
    for(int k=0, i=0;i<n;++i) {
        if(isa[i]){
            for(int j=sa[isa[i]-1]; s[i+k]==s[j+k]; ++k);
            lcp[isa[i]] = (k ? k-- : 0);
        }
    }
    return lcp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;
    auto sa = getsa(s);
    auto lcp = getlcp(sa, s);

    int ans = 0;
    for(auto u : lcp) ans = max(ans, u);
    cout << ans;

    return 0;
}