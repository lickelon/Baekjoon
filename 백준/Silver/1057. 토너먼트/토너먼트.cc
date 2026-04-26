#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b, ans = 0;

    cin >> n >> a >> b;

    while(a != b) {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        ans++;
    }

    cout << ans;

    return 0;
}