#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> parent;

int find(int x) {
    if(parent[x] == x) return x;
    return (parent[x] = find(parent[x]));
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    if(x == y) return;
    parent[x] = y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;

    parent = vector<int>(n);
    for(int i = 0; i < n; i++) parent[i] = i;

    priority_queue<pair<int, pii>, vector<pair<int, pii>>, greater<pair<int, pii>>> _pq;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < n; j++) {
            if(s[j] == '0') continue;
            else if(s[j] >= 'a') {
                _pq.push({s[j] - 'a' + 1, {i, j}});
            }
            else {
                _pq.push({s[j] - 'A' + 27, {i, j}});
            }
        }
    }
    int ans = 0;
    while(!_pq.empty()) {
        int cost = _pq.top().first;
        pii e = _pq.top().second;
        _pq.pop();
        if(find(e.first) == find(e.second)) {
            ans += cost;
            continue;
        }
        merge(e.first, e.second);
    }

    for(int i = 0; i < n; i++) {
        if(find(0) != find(i)) ans = -1;
    }
    cout << ans;

    return 0;
}