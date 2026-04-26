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

vector<int> getMax(vector<pii> data) {
    vector<int> res;
    sort(all(data), comp);

    int M = data[0].first;
    for(auto u : data) {
        if(u.first == M) {
            res.emplace_back(u.second);
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
        sort(all(arr[i]));
    }
    
    vector<pii> score(n);
    for(int i = 0; i < n; i++) {
        score[i] = {0, i+1};
    }
    for(int j = 0; j < m; j++) {
        vector<pii> data(n);
        for(int i = 0; i < n; i++) {
            data.emplace_back(make_pair(arr[i][j], i));
        }
        vector<int> res = getMax(data);
        for(auto u : res) {
            score[u].first++;
        }
    }

    vector<int> ans = getMax(score);
    for(auto u : ans) {
        cout << u << " ";
    }

    return 0;
}