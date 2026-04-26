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

void rotate(int a[4]) {
    int temp = a[0];
    for(int i = 1; i < 4; i++) {
        a[i-1] = a[i];
    }
    a[3] = temp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int a[4];
    cin >> a[0] >> a[3] >> a[1] >> a[2];
    int M = 0, r = 0;
    for(int i = 0; i < 4; i++) {
        if((double)a[0] / a[1] + (double)a[3] / a[2] > M) {
            M = (double)a[0] / a[1] + (double)a[3] / a[2];
            r = i;
        }
        rotate(a);
    }

    cout << r;

    return 0;
}