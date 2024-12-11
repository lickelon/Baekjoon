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

    int r, c;
    cin >> r >> c;
    vector<string> arr(r);
    for(auto &e: arr) cin >> e;

    auto check = [&](int x, int y){
        if(x < 0 || x >= r || y < 0 || y >= c) return 0;
        if(arr[x][y] == 'S') return 0;
        if(arr[x][y] == 'W') return -1;
        return 1;
    };

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr[i][j] != 'S') continue;
            for(int d = 0; d < 4; d++) {
                int x = i+dx[d];
                int y = j+dy[d];
                int ret = check(x, y);
                if(ret == 1) arr[x][y] = 'D';
                else if(ret == 0) continue;
                else {
                    cout << 0;
                    return 0;
                }
            }
        }
    }
    cout << "1\n";
    for(auto e : arr) {
        cout << e << "\n";
    }

    return 0;
}