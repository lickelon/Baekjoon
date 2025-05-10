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

    int y = 2024;
    int m = 1;
    int n;
    cin >> n;
    m += n * 7;
    y += (m-1)/12;
    m = (m-1)%12 + 1;
    cout << y << " " << m;

    return 0;
}