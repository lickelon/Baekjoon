#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

const int _up = 1;
const int _right = 2;
const int _down = 3;
const int _left = 4;

int board[2003][2003];
vector<pii> p;

void bfs()
{
    queue<pii> _q;
    _q.push(p[0]);

    while(!_q.empty())
    {
        pii curr = _q.front(); _q.pop();
        if(curr == p[1]) break;
        int x = curr.first, y = curr.second;
        if(board[x-1][y] == 0)
        {
            board[x-1][y] = _down;
            _q.push({x-1,y});
        }
        if(board[x][y+1] == 0)
        {
            board[x][y+1] = _left;
            _q.push({x,y+1});
        }
        if(board[x+1][y] == 0)
        {
            board[x+1][y] = _up;
            _q.push({x+1,y});
        }
        if(board[x][y-1] == 0)
        {
            board[x][y-1] = _right;
            _q.push({x,y-1});
        }
    }
    
    pii curr = p[1];
    while(curr != p[0])
    {
        int dir = board[curr.first][curr.second];
        board[curr.first][curr.second] = 5;
        switch(dir)
        {
        case _up:
            curr.first -= 1;
            break;
        case _right:
            curr.second += 1;
            break;
        case _down:
            curr.first += 1;
            break;
        case _left:
            curr.second -= 1;
            break;
        }
    }
    board[p[0].first][p[0].second] = 5;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    fill(&board[0][0], &board[2002][2003], -1);

    for(int i = 0; i < n; i++)
    {
        string line;
        cin >> line;
        for(int j = 0; j < m; j++)
        {
            if(line[j] == '+')
            {
                board[i+1][j+1] = -1;
            }
            else if(i == 0 || j == 0 || j == m-1 || i == n-1)
            {
                board[i+1][j+1] = 0;
                p.push_back({i+1,j+1});
            }
            else
            {
                board[i+1][j+1] = 0;
            }
        }
    }

    bfs();

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(board[i+1][j+1] == -1) cout << "+";
            else if(board[i+1][j+1] == 5) cout << ".";
            else cout << "@";
        }
        cout << "\n";
    }

    return 0;
}