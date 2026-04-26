#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int ca[] = {1,2,3,3,4,10};
int cb[] = {1,2,2,2,3,5,10};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    while(true) {
        int b, n;
        cin >> b >> n;
        if(b == 0 && n == 0) break;
        int m = INF, mi;
        for(int i = 1; pow(i, n) <= 2000000; i++) {
            if(abs(m - b) >  abs(pow(i, n) - b)) {
                m = pow(i, n);
                mi = i;
            }
        }
        cout << mi << '\n';
    }

    return 0;
}