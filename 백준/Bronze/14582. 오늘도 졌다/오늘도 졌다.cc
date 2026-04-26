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

    bool ans = false;
    int a[9];
    for(auto& u : a) cin >> u;
    int b[9];
    for(auto& u : b) cin >> u;
    int sa = 0, sb = 0;
    for(int i = 0; i < 9; i++) {
        sa += a[i];
        ans |= sa > sb;
        sb += b[i];
        ans |= sa > sb;
    }
    cout << (ans ? "Yes" : "No");
    return 0;
}