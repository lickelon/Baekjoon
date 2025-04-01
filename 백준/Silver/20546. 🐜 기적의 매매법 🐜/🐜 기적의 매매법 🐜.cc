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

    int a, b;
    int sa, sb;
    cin >> a;
    b = a;
    sa = sb = 0;
    
    int cnt = 0;
    int before = 0;
    cin >> before;

    sa += (a / before);
    a -= before * sa;
    for(int i = 1; i < 14; i++) {
        int curr;
        cin >> curr;
        sa += (a / curr);
        a %= curr;

        if(before < curr) {
            if(cnt >= 0) cnt++;
            else cnt = 1;
        }
        if(before == curr) cnt = 0;
        if(before > curr) {
            if(cnt <= 0) cnt--;
            else cnt = -1;
        }
        if(cnt <= -3) {
            sb += (b / curr);
            b %= curr;
        }
        if(cnt >= 3) {
            b += sb * curr;
            sb = 0;
        }
        before = curr;
    }
    b += sb * before;
    a += sa * before;

    if(a == b) {
        cout << "SAMESAME";
    }
    else {
        cout << (a > b ? "BNP" : "TIMING");
    }
    
    return 0;
}