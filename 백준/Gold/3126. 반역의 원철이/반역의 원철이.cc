#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll dx[8] = {0, -1, -1, -1, 0, 1, 1, 1};
ll dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
struct d {
    ll dir[8];
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(6); cout << fixed;

    ll xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<d> arr(n+1);
    int curr = 0;
    for(int i = 1; i <= n; i++) {
        curr += s[i-1] - '0';
        curr %= 8;
        arr[i] = arr[i-1];
        arr[i].dir[curr] += 1;
    }

    ll ans = LLONG_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 8; j++) {
            d result = arr[i];
            for(int k = 0; k < 8; k++) {
                int idx = (k+j)%8;
                result.dir[k] += arr[n].dir[idx] - arr[i].dir[idx];
            }
            ll resX, resY;
            resX = xa;
            resY = ya;
            for(int j = 0; j < 8; j++) {
                resX += dx[j] * result.dir[j];
                resY += dy[j] * result.dir[j];
            }
            ans = min(ans, (xb-resX)*(xb-resX) + (yb-resY)*(yb-resY));
        }
    }
    cout << sqrtl(ans);

    return 0;
}