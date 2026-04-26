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

    int t=3;
    while(t--) {
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a+4);
        if(a[0]) cout << 'E';
        else if(a[1]) cout << 'A';
        else if(a[2]) cout << 'B';
        else if(a[3]) cout << 'C';
        else cout << 'D';
        cout << "\n";
    }
    return 0;
}