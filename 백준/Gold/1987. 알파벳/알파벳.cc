#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define x first
#define y second

class _data
{
public:
    bitset<26> alpha;
    pii coord;
    
    _data(pii coord) {
        alpha = bitset<26>(0);
        this->coord = coord;
    }
    _data(bitset<26> alpha, pii coord) {
        this->alpha = alpha;
        this->coord = coord;
    }
};

stack<_data> _st;

int board[22][22];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int r, c;
    cin >> r >> c;

    for(int i = 0; i < r; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < c; j++) {
            board[i+1][j+1] = s[j] - 'A' + 1;
        }
    }
    _st.push(_data(bitset<26>(1 << (board[1][1] - 1)), make_pair(1,1)));
    int ans = 0;
    while(!_st.empty()) {
        _data dt = _st.top(); _st.pop();
        pii coord = dt.coord;
        ans = max(ans, (int)dt.alpha.count());
        if(board[coord.x-1][coord.y] && dt.alpha[board[coord.x-1][coord.y] - 1] == 0) {
            dt.alpha[board[coord.x-1][coord.y] - 1] = 1;
            _st.push(_data(dt.alpha, make_pair(coord.x-1, coord.y)));
            dt.alpha[board[coord.x-1][coord.y] - 1] = 0;
        }
        if(board[coord.x][coord.y-1] && dt.alpha[board[coord.x][coord.y-1] - 1] == 0) {
            dt.alpha[board[coord.x][coord.y-1] - 1] = 1;
            _st.push(_data(dt.alpha, make_pair(coord.x, coord.y-1)));
            dt.alpha[board[coord.x][coord.y-1] - 1] = 0;
        }
        if(board[coord.x+1][coord.y] && dt.alpha[board[coord.x+1][coord.y] - 1] == 0) {
            dt.alpha[board[coord.x+1][coord.y] - 1] = 1;
            _st.push(_data(dt.alpha, make_pair(coord.x+1, coord.y)));
            dt.alpha[board[coord.x+1][coord.y] - 1] = 0;
        }
        if(board[coord.x][coord.y+1] && dt.alpha[board[coord.x][coord.y+1] - 1] == 0) {
            dt.alpha[board[coord.x][coord.y+1] - 1] = 1;
            _st.push(_data(dt.alpha, make_pair(coord.x, coord.y+1)));
            dt.alpha[board[coord.x][coord.y+1] - 1] = 0;
        }
    }

    cout << ans;

    return 0;
}