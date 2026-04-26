#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define PI 3.1415927

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int M = 0, idx;
    for (int i = 0; i < 5; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        a += b + c + d;
        if(a > M) {
            M = a;
            idx = i;
        }
    }
    cout << idx + 1 << " " << M;
    return 0;
}