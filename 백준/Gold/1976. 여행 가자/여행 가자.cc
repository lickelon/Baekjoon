#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int p[201];

int find(int a) {
    if(a == p[a]) return a;
    return p[a] = find(p[a]);
}

void merge(int a, int b) {
    int fa = find(a);
    int fb = find(b);
    if(fa != fb) p[fa] = fb;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        p[i] = i;
    }

    vector<vector<int>> edge(n+1);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int a;
            cin >> a;
            if(a) merge(i, j);
        }
    }

    int root;
    cin >> root;
    root -= 1;
    root = find(root);
    for(int i = 1; i < m; i++) {
        int u;
        cin >> u;
        u -=1;
        if(find(u) != root) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}