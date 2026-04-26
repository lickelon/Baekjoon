#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pair<string, int> &a, pair<string, int> &b) {
    if(a.second == b.second) {
        if(a.first.length() == b.first.length()) {
            return a.first < b.first;
        }
        return a.first.length() > b.first.length();
    }
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    map<string, int> _m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s.length() < m) continue;
        _m[s]++;
    }
    vector<pair<string, int>> arr(all(_m));
    sort(all(arr), comp);

    for(auto u : arr) {
        cout << u.first << "\n";
    }

    return 0;
}