#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define x first
#define y second

template <typename T1, typename T2>
istream& operator>>(istream & ist, pair<T1, T2> &p) {
    ist >> p.first >> p.second;
    return ist;
}
template <typename T>
istream& operator>>(istream & ist, vector<T> &arr) {
    for(auto &u : arr) ist >> u;
    return ist;
}

ll getDirection(pll a, pll b, pll p) {
    return (b.x - a.x) * (p.y - a.y) - (b.y - a.y) * (p.x - a.x) > 0 ? 1 : -1;
}
bool checkOpposition(pll a, pll b, pll p1, pll p2) {
    return getDirection(a, b, p1) * getDirection(a, b, p2) < 0ll;
}
bool checkConvex(pll a, pll b, pll c, pll d) {
    int cnt = 0;
    cnt += checkOpposition(a, b, c, d);
    cnt += checkOpposition(a, c, b, d);
    cnt += checkOpposition(a, d, b, c);
    cnt += checkOpposition(b, c, a, d);
    cnt += checkOpposition(b, d, a, c);
    cnt += checkOpposition(c, d, a, b);
    return cnt == 2;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<pll> arr(n);
    cin >> arr;

    int ans = 0;
    for(int a = 0; a < n; a++) {
        for(int b = a+1; b < n; b++) {
            for(int c = b+1; c < n; c++) {
                for(int d = c+1; d < n; d++) {
                    ans += checkConvex(arr[a], arr[b], arr[c], arr[d]);
                }
            }
        }
    }
    cout << ans;

    return 0;
}