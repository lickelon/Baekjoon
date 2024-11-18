#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[27][27];

int dfs(int x, int y) {
    stack<pii> _st;
    _st.push({x, y});
    board[x][y] = 0;

    int cnt = 0;
    while(!_st.empty()) {
        cnt++;
        pii curr = _st.top(); _st.pop();
        int cx = curr.first, cy = curr.second;
        int dx[] = {1,0,-1,0};
        int dy[] = {0,1,0,-1};
        for(int i = 0; i < 4; i++) {
            if(board[cx+dx[i]][cy+dy[i]]) {
                _st.push({cx+dx[i], cy+dy[i]});
                board[cx+dx[i]][cy+dy[i]] = 0;
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < n; j++) {
            board[i+1][j+1] = s[j] - '0';
        }
    }

    vector<int> result;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(board[i][j] == 1) {
                result.emplace_back(dfs(i, j));
            }
        }
    }
    sort(all(result));
    cout << result.size() << "\n";
    for(auto u : result) {
        cout << u << "\n";
    }

    return 0;
}