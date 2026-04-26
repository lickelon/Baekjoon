#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;

using ld = long double;

using pii = pair<int,int>;

using pll = pair<ll, ll>;

using edge = pair<int, pii>;

int parent[10001];

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

    int n, m;

    cin >> n >> m;

    vector<edge> arr(m);

    for(int i = 1; i <= n; i++) {

        parent[i] = i;

    }

    for(int i = 0; i < m; i++) {

        int d;

        cin >> arr[i].second.first >> arr[i].second.second >> arr[i].first >> d;

        if(d) {

            merge(arr[i].second.first, arr[i].second.second);

            arr[i].first = 0;

        }

    }

    sort(arr.rbegin(), arr.rend());

    int ans = 0;

    for(int i = 0; i < m; i++) {

        if(iscycle(arr[i].second.first, arr[i].second.second)) ans += arr[i].first;

        else merge(arr[i].second.first, arr[i].second.second);

    }

    cout << ans;

    return 0;

}