#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pii &a, pii &b) {
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<pii> arr(n);
    for(auto &u : arr) {
        cin >> u.first >> u.second;
    }
    sort(all(arr), comp);

    int ans = INF;
    for(auto u : arr) {
        ans = min(ans, u.second);
        ans -= u.first;
    }
    cout << (ans < 0 ? -1 : ans);

    return 0;
}