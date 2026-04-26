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

    int n, h, w;
    cin >> n >> h >> w;
    vector<int> arr(n, 127);
    for(int i = 0; i < h; i++) {
        string s;
        cin >> s;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < w; j++) {
                arr[i] &= s[i*w+j];
            }
        }
    }
    for(auto u : arr) {
        if(u < 63) cout << (char)(u+64);
        else cout << (char)u;
    }

    return 0;
}