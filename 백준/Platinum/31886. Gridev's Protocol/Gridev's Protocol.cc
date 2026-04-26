#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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

    int n, m, k;
    cin >> n >> m >> k;
    vector<unordered_set<int>> r1(n+1), c1(n+1);
    vector<pii> arr;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        r1[a].insert(b);
        c1[b].insert(a);
        arr.emplace_back(pii(a,b));
    }

    int ans = INF;
    //rcrcrc
    queue<pii> _q; // r=0, c=1 & num
    for(int i = 1; i <= n; i++) {
        if(r1[i].size() <= k) {
            _q.push(pii(0, i));
        }
    }
    for(int i = 1; i <= n; i++) {
        if(c1[i].size() <= k) {
            _q.push(pii(1, i));
        }
    }
    int removed = 0;
    int cnt = 0;
    int before = -1;
    while(!_q.empty()) {
        pii f = _q.front(); _q.pop();
        if(f.first == 0 && r1[f.second].size() == 0) continue;
        if(f.first == 1 && c1[f.second].size() == 0) continue;
        if(f.first != before) {
            cnt++;
            before = f.first;
        }
        if(f.first == 0) {
            for(auto u : r1[f.second]) {
                c1[u].erase(f.second);
                removed++;
                if(c1[u].size() <= k) {
                    _q.push(pii(1, u));
                }
            }
            r1[f.second].clear();
        }
        if(f.first == 1) {
            for(auto u : c1[f.second]) {
                r1[u].erase(f.second);
                removed++;
                if(r1[u].size() <= k) {
                    _q.push(pii(0, u));
                }
            }
            c1[f.second].clear();
        }
    }
    if(removed == m) {
        ans = min(ans,cnt);
    }

    //crcrcr
    vector<unordered_set<int>> r2(n+1), c2(n+1);
    for(int i = 0; i < m; i++) {
        int a = arr[i].first;
        int b = arr[i].second;
        r2[a].insert(b);
        c2[b].insert(a);
    }
    while(!_q.empty()) _q.pop();
    before = -1;
    for(int i = 1; i <= n; i++) {
        if(c2[i].size() <= k) {
            _q.push(pii(1, i));
        }
    }
    for(int i = 1; i <= n; i++) {
        if(r2[i].size() <= k) {
            _q.push(pii(0, i));
        }
    }
    removed = 0;
    cnt = 0;
    while(!_q.empty()) {
        pii f = _q.front(); _q.pop();
        if(f.first == 0 && r2[f.second].size() == 0) continue;
        if(f.first == 1 && c2[f.second].size() == 0) continue;
        if(f.first != before) {
            cnt++;
            before = f.first;
        }
        if(f.first == 0) {
            for(auto u : r2[f.second]) {
                c2[u].erase(f.second);
                removed++;
                if(c2[u].size() <= k) {
                    _q.push(pii(1, u));
                }
            }
            r2[f.second].clear();
        }
        if(f.first == 1) {
            for(auto u : c2[f.second]) {
                r2[u].erase(f.second);
                removed++;
                if(r2[u].size() <= k) {
                    _q.push(pii(0, u));
                }
            }
            c2[f.second].clear();
        }
    }
    if(removed == m) {
        ans = min(ans,cnt);
    }
    cout << (ans != INF ? ans : -1);
    return 0;
}