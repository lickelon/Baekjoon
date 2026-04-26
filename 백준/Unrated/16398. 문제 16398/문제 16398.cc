#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;
using edge = pair<ll, pii>;

int parent[1001];

int find(int a)
{
    if(parent[a] == a) return a;
    return parent[a] = find(parent[a]);
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a == b) return;
    parent[a] = b;
}

bool iscycle(int a, int b) {
    a = find(a);
    b = find(b);
    return a == b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<edge> arr;

    for(int i = 1; i <= n; i++) {
        parent[i] = i;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ll c;
            cin >> c;
            if(i > j) {
                arr.emplace_back(make_pair(c, make_pair(i, j)));
            }
        }
    }

    sort(arr.begin(), arr.end());

    ll ans = 0;
    for(int i = 0; i < arr.size(); i++) {
        if(!iscycle(arr[i].second.first, arr[i].second.second)) {
            merge(arr[i].second.first, arr[i].second.second);
            ans += arr[i].first;
        }
    }

    cout << ans;
    return 0;
}