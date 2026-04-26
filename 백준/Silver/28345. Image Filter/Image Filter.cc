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

    int T;
    cin >> T;
    while(T--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> arr(r, vector<int>(c));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                int ans = 0;
                int diff = arr[i][j];
                int a, b, c;
                a = j > 0 ? arr[i][j-1] : 0;
                b = i > 0 ? arr[i-1][j] : 0;
                c = i*j > 0 ? arr[i-1][j-1] : 0;
                if(abs(a - arr[i][j]) < abs(diff)) {
                    ans = 1;
                    diff = arr[i][j] - a;
                }
                if(abs(b - arr[i][j]) < abs(diff)) {
                    ans = 2;
                    diff = arr[i][j] - b;
                }
                if(abs((a+b)/2 - arr[i][j]) < abs(diff)) {
                    ans = 3;
                    diff = arr[i][j] - (a+b)/2;
                }
                if(abs(a + b - c - arr[i][j]) < abs(diff)) {
                    ans = 4;
                    diff = arr[i][j] - (a+b-c);
                }
                cout << ans << " " << diff << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}