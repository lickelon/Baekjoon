#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    pii arr[] = {
        {220, 284},
        {1184, 1210},
        {2620, 2924},
        {5020, 5564},
        {6232, 6368},
        {10744, 10856},
        {12285, 14595},
        {17296, 18416}
    };

    int n;
    cin >> n;
    for(auto &[a, b] : arr) {
        if(a >= n) {
            cout << a << " " << b;
            return 0;
        }
        if(b >= n) {
            cout << b << " " << a;
            return 0;
        }
    }

    return 0;
}