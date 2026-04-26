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

    int a, t, x;
    cin >> a >> t >> x;
    //assert(!(a==8 && t==2 && x == 0));
    int cntx = 0;
    int n = 1;
    int cntn = 0;
    int cntt = 0;
    while(true) {
        int curr = 0;
        if(cntn < 4) curr = cntn % 2;
        else {
            int temp = cntn - 4;
            if(temp < n+1) curr = 0;
            else curr = 1;
        }
        if(curr == x) cntx++;
        if(cntx == t) {
            break;
        }
        cntn++;
        if(cntn == 4 + (n+1)*2) {
            n++;
            cntn = 0;
        }
        cntt++;
    }
    cout << cntt % a;

    return 0;
}