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

    int d, n;
    cin >> n >> d;
    int dn = 0;
    for(int temp = d; temp; temp /= 10) {
        dn++;
    }
    if(dn > n) {
        cout << "No solution";
    }
    else {
        cout << d;
        for(int i = dn; i < n; i++) cout << 0;
    }

    return 0;
}