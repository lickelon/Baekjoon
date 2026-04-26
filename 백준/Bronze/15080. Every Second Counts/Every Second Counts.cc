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
    //ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);

    int h1, m1, s1;
    scanf("%d %*s %d %*s %d", &h1, &m1, &s1);
    int h2, m2, s2;
    scanf("%d %*s %d %*s %d", &h2, &m2, &s2);
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    if(t2 < t1) t2 += 3600 * 24;
    cout << t2 - t1;

    return 0;
}