#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

void traversal(vector<pii> tree, int node, int mode) {
    if(node == -19) return;
    auto [l, r] = tree[node];
    if(mode == -1) cout << (char)('A'+node);
    traversal(tree, l, mode);
    if(mode == 0) cout << (char)('A'+node);
    traversal(tree, r, mode);
    if(mode == 1) cout << (char)('A'+node);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<pii> tree(n);

    for(int i = 0; i < n; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        tree[a[0]-'A'].first = b[0]-'A';
        tree[a[0]-'A'].second = c[0]-'A';
    }

    traversal(tree, 0, -1);
    cout << "\n";
    traversal(tree, 0, 0);
    cout << "\n";
    traversal(tree, 0, 1);
    cout << "\n";

    return 0;
}