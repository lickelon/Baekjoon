#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> e[1000000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    map<string, int> _m;
    int number = 0;
    for(int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        if(_m.find(a) == _m.end()) {
            _m[a] = number++;
        }
        if(_m.find(b) == _m.end()) {
            _m[b] = number++;
        }
        e[_m[a]].emplace_back(_m[b]);
    }

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        string a, b;
        cin >> a >> b;
        int na, nb;
        na = _m.find(a) != _m.end() ? _m[a] : -1;
        nb = _m.find(b) != _m.end() ? _m[b] : -1;
        if(na == -1 || nb == -1 || na == nb) {
            cout << "gg ";
            continue;
        }

        bool find = false;
        stack<int> _st;
        vector<bool> visit(n);
        _st.push(na);
        visit[na] = true;
        while(!_st.empty()) {
            int temp = _st.top(); _st.pop();
            for(auto u : e[temp]) {
                if(!visit[u]) _st.push(u);
                visit[u] = true;
            }
            if(temp == nb) {
                find = true;
                cout << a;
            }
        }

        while(!_st.empty()) _st.pop();
        fill(all(visit), false);
        _st.push(nb);
        visit[nb] = true;
        while(!_st.empty()) {
            int temp = _st.top(); _st.pop();
            for(auto u : e[temp]) {
                if(!visit[u]) _st.push(u);
                visit[u] = true;
            }
            if(temp == na) {
                find = true;
                cout << b;
            }
        }
        if(!find) cout << "gg";
        cout << " ";
    }

    return 0;
}