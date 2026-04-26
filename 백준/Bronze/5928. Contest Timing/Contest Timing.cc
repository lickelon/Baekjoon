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

    int D, H, M;
    int ans = 0;

    cin >> D >> H >> M;

    ans += (D - 11) * 1440;
    ans += (H - 11) * 60;
    ans += (M - 11);

    cout << max(-1, ans);

    return 0;
}