#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321
#define int long long

using namespace std;

using ld = long double;
using pii = pair<int,int>;

template <typename T1, typename T2>
istream& operator>>(istream & ist, pair<T1,T2> &p) {
    ist >> p.first >> p.second;
    return ist;
}
template <typename T>
istream& operator>>(istream & ist, vector<T> &arr) {
    for(auto &u : arr) ist >> u;
    return ist;
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<string> arr(n);
    cin >> arr;

    int ans = 0;

    int dx[] = {1, 1, 1, 0, -1, -1, -1, 0};
    int dy[] = {1, 0, -1, -1, -1, 0, 1, 1};
    string mobis = "MOBIS";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] != 'M') continue;
            for(int d = 0; d < 8; d++) {
                if(i + dx[d]*4 < 0 || i + dx[d]*4 >= n) continue;
                if(j + dy[d]*4 < 0 || j + dy[d]*4 >= n) continue;
                int l;
                for(l = 0; l < 5; l++) {
                    if(arr[i+dx[d]*l][j+dy[d]*l] != mobis[l]) break;
                }
                if(l == 5) ans++;
            }
        }
    }
    cout << ans;

    return 0;
}