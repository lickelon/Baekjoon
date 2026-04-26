#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pii&a, pii&b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
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
    int ans = 0;
    for(int i = 5; i < n; i++) {
        if(arr[i].first == arr[4].first) ans++;
        else break;
    }
    cout << ans;


    return 0;
}