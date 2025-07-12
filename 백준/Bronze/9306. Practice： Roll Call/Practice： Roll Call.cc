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

    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        string a, b;
        cin >> a >> b;
        cout << "Case " << i+1 << ": " << b << ", " << a << "\n";
    }

    return 0;
}