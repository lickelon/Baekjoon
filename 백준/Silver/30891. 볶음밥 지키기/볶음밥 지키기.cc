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

    int n, r;
    cin >> n >> r;
    vector<pii> arr(n);
    for(auto &u : arr) cin >> u.first >> u.second;

    int ansX, ansY, ans = -1;
    for(int x = -100; x <= 100; x++) {
        for(int y = -100; y <= 100; y++) {
            int temp = 0;
            for(auto u : arr) {
                int dx = abs(x-u.first);
                int dy = abs(y-u.second);
                if(dx*dx + dy*dy <= r*r) temp++;
            }
            if(temp > ans) {
                ansX = x;
                ansY = y;
                ans = temp;
            }
        }
    }
    cout << ansX << " " << ansY;

    return 0;
}