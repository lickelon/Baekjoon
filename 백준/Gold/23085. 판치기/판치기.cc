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

    int n, k;
    cin >> n >> k;
    vector<int> visit(n+1, -1);

    string s;
    cin >> s;
    int cnt = 0;
    for(auto u : s) {
        if(u == 'H') cnt++;
    }
    visit[cnt] = 0;
    
    queue<int> _q;
    _q.push(cnt);
    while(!_q.empty()) {
        int h = _q.front(); _q.pop();
        int t = n - h;
        for(int i = 0; i <= k; i++) {
            if(t >= i && h >= k-i) {
                if(visit[h + i*2-k] != -1) continue;
                visit[h + i*2-k] = visit[h]+1;
                _q.push(h + i*2-k);
            }
        }
    }
    cout << visit[0];

    return 0;
}