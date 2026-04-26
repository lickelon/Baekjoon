#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int p[4000001];

int find(int u){
    if(u == p[u]) return u;
    return p[u] = find(p[u]);
}

void merge(int u){
    int v = u + 1;
    u = find(u), v = find(v);
    if(u == v) return;
    p[u] = v;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(m);
    for(auto &u : arr) cin >> u;
    for(int i = 0; i < m; i++) {
        p[i] = i;
    }
    sort(all(arr));
    for(int i = 0; i < k; i++) {
        int input;
        cin >> input;
        auto iter = upper_bound(all(arr), input);
        int index = find(iter - arr.begin());
        cout << arr[index] << "\n";
        merge(index);
    }

    return 0;
}