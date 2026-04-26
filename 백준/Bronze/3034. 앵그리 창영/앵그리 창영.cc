#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int n, w, h;
    cin >> n >> w >> h;
    int bd = w*w + h*h;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cout << (bd >= a*a ? "DA" : "NE") << "\n";
    }
    return 0;
}