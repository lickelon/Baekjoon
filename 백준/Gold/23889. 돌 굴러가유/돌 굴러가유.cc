#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pii& a, pii& b) {
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    
    vector<pii> stone(k+1);
    for(int i = 0; i < k; i++) {
        cin >> stone[i].second;
    }
    stone[k].second = n+1;

    for(int i = 0; i < k; i++) {
        for(int j = stone[i].second-1; j < stone[i+1].second-1; j++) {
            stone[i].first += arr[j];
        }
    }
    stone.pop_back();
    sort(all(stone), comp);

    vector<int> ans(m);
    for(int i = 0; i < m; i++) {
        ans[i] = stone[i].second;
    }
    sort(all(ans));
    for(auto u : ans) {
        cout << u << "\n";
    }

    return 0;
}