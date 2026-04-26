#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if(a[1] - a[0] == a[2] - a[1]) {
        cout << a[2] + (a[2] - a[1]);
    }
    else if(a[1] - a[0] > a[2] - a[1]) {
        cout << (a[1] + a[0]) / 2;
    }
    else if(a[1] - a[0] < a[2] - a[1]) {
        cout << (a[1] + a[2]) / 2;
    }

    return 0;
}