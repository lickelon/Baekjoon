#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int parent[3001];

int find(int a) {
    if(a == parent[a]) return a;
    return parent[a] = find(parent[a]);
}

void merge(int a, int b) {
    a = find(a), b = find(b);
    parent[a] = b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int v, e;
    cin >> v >> e;

    for(int i = 1; i <= v; i++) parent[i] = i;

    vector<int> cnt(v+1);
    for(int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b]++;
        merge(a, b);
    }

    bool chk = true;
    int p = find(1);
    int odd = 0;
    for(int i = 1; i <= v; i++) {
        if(p != find(i)) chk = false;
        if(cnt[i] % 2) odd++;
    }
    if(odd != 0 && odd != 2) chk = false;

    cout << (chk ? "YES" : "NO");
    return 0;
}