#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[501][501];
int visit[501];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    int ans = 0;
    queue<int> _q;
    for(int i = 1; i <= n; i++) {
        if(arr[1][i]) {
            _q.push(i);
            visit[i] = 1;
            ans++;
        }
    }
    while(!_q.empty()) {
        int t = _q.front(); _q.pop();
        for(int i = 2; i <= n; i++) {
            if(arr[t][i] && !visit[i]) {
                visit[i] = 1;
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}