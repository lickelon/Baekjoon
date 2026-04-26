#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for(int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;

    cin >> k;

    int ans = 0;

    ans = -1 + sqrtl(4 * k - 2);
    ans /= 2;

    cout << ans;
    return 0;
}