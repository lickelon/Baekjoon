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
    // ios::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);

    int y, m, d;
    scanf("%d-%d-%d", &y, &m, &d);
    if(y == 2023) {
        if(m == 9) {
            if(d == 16) cout << "GOOD";
            if(d < 16) cout << "GOOD";
            if(d > 16) cout << "TOO LATE";
        }
        if(m < 9) cout << "GOOD";
        if(m > 9) cout << "TOO LATE";
    }
    if(y < 2023) cout << "GOOD";
    if(y > 2023) cout << "TOO LATE";

    return 0;
}