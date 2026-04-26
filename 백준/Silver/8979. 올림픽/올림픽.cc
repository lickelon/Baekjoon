#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<tuple<int,int,int>> arr(n);
    tuple<int,int,int> pivot;

    for (int i = 0; i < n; i++) {
        int a, g, s, c;
        cin >> a >> g >> s >> c;
        arr[i] = make_tuple(g, s, c);
        if(a == k) pivot = arr[i];
    }

    int ans = 1;
    for(auto u : arr) {
        if(u > pivot) ans++;
    }

    cout << ans;

    return 0;
}