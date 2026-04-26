#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

const int M[3] = {15, 28, 19};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int in[3];
    cin >> in[0] >> in[1] >> in[2];
    int ans = 1;
    int cmp[3] = {1,1,1};
    while(true) {
        bool chk = true;
        for(int i = 0; i < 3; i++) {
            chk &= in[i] == cmp[i];
        }
        if(chk) {
            cout << ans << "\n";
            break;
        }
        ans++;
        for(int i = 0; i < 3; i++) {
            cmp[i] = (cmp[i] % M[i]) + 1;
        }
    }

    return 0;
}