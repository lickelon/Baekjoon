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

    int n, m;
    cin >> n >> m;
    vector<int> sub(m+1);
    for(int i = 1; i <= m; i++) cin >> sub[i];
    vector<vector<int>> subs(m+1), studs(n);
    for(int i = 0; i < n; i++) {
        while(true){
            int input;
            cin >> input;
            if(input == -1) break;
            subs[input].emplace_back(i);
        }
    }
    for(int i = 1; i <= m; i++) {
        if(subs[i].size() <= sub[i]) {
            for(auto u : subs[i]) {
                studs[u].emplace_back(i);
            }
            sub[i] -= subs[i].size();
            subs[i].clear();
        }
    }
    for(int i = 0; i < n; i++) {
        while(true){
            int input;
            cin >> input;
            if(input == -1) break;
            subs[input].emplace_back(i);
        }
    }
    for(int i = 1; i <= m; i++) {
        if(subs[i].size() <= sub[i]) {
            for(auto u : subs[i]) {
                studs[u].emplace_back(i);
            }
            sub[i] -= subs[i].size();
            subs[i].clear();
        }
    }
    for(int i = 0; i < n; i++) {
        sort(all(studs[i]));
        if(studs[i].size() == 0) {
            cout << "망했어요\n";
            continue;
        }
        for(auto u : studs[i]) {
            cout << u << " ";
        }
        cout << "\n";
    }

    return 0;
}