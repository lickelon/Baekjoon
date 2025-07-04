#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

array<int, 4> select() {
    int r;
    cin >> r;
    array<int, 4> ret;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int input;
            cin >> input;
            if(i == r-1) ret[j] = input;
        }
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        int check[16] = {};
        for(auto e : select()) {
            check[e-1] += 1;
        }
        for(auto e : select()) {
            check[e-1] += 1;
        }
        int ans = 0;
        for(int i = 0; i < 16; i++) {
            if(check[i] == 2) {
                if(ans == 0) ans = i+1;
                else ans = -1;
            }
        }
        cout << "Case #" << t << ": ";
        if(ans > 0) cout << ans << "\n";
        else cout << (ans == 0 ? "Volunteer cheated!" : "Bad magician!") << "\n";
    }

    return 0;
}