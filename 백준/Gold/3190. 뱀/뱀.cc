#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct instruction {
    int t;
    int d;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<vector<int>> board(n+2, vector<int>(n+2, 0));
    for(int i = 0; i < n+2; i++) {
        board[i][0] = 1;
        board[i][n+1] = 1;
        board[0][i] = 1;
        board[n+1][i] = 1;
    }

    for(int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        board[a][b] = 2;
    }

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    int l;
    cin >> l;
    vector<instruction> insts(l);
    for(auto &e : insts) {
        cin >> e.t;
        string s;
        cin >> s;
        if(s == "D") e.d = 1;
        else e.d = -1;
    }
    insts.push_back({INF, 0});

    queue<pii> _q;
    _q.emplace(1, 1);
    board[1][1] = 3;
    pii curr = {1,1};
    
    int second = 0, idx = 0, direction = 0;
    while(true) {
        second++;
        pii next = curr;
        next.first += dx[direction];
        next.second += dy[direction];
        if(board[next.first][next.second] % 2 == 1) {
            break;
        }
        curr = next;
        if(board[next.first][next.second] == 0) {
            pii temp = _q.front(); _q.pop();
            board[temp.first][temp.second] = 0;
        }
        _q.push(curr);
        board[curr.first][curr.second] = 3;

        if(insts[idx].t == second) {
            direction = (4 + direction + insts[idx].d) % 4;
            idx++;
        }
    }
    cout << second;

    return 0;
}