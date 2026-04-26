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

    int n, a, b;
    cin >> n >> a >> b;

    for(int i = n; i < 8; i++) {
        int x, y;
        cin >> x >> y;
        a += x * 3;
        b += x * 3;
        b += min((6 - x), y) * 3;
    }
    if(a >= 66 && b >= 130) {
        cout << "Nice";
    }
    else {
        cout << "Nae ga wae";
    }

    return 0;
}