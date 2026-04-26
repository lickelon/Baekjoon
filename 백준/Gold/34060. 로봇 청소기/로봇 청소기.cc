#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> parent;
void init(int n) {
    parent = vector<int>(n);
    for(int i = 0; i < n; i++) {
        parent[i] = i;
    }

}
int find(int x) {
    if(x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}

void merge(int a, int b) {
    a = find(a);
    b = find(b);
    parent[b] = a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    //assert(n != 1);
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    init(n);
    vector<map<int, int>> c(1);
    int before = INF;
    for(int i = 0; i < n; i++) {
        int e = arr[i];
        if(e <= before) {
            c.push_back(map<int, int>());
        }
        c.back()[e] = i;
        if(c[c.size()-1].find(e-1) != c[c.size()-1].end()) {
            merge(i, c[c.size()-1][e-1]);
        }
        if(c[c.size()-2].find(e) != c[c.size()-2].end()) {
            merge(i, c[c.size()-2][e]);
        }
        before = e;
    }

    set<int> cnt;
    for(int i = 0; i < n; i++) {
        cnt.insert(find(i));
    }
    cout << cnt.size() << "\n" << n << "\n";


    return 0;
}