#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int ans = 0;

    for(int i = 0; i < 6; i++)
    {
        char c;
        cin >> c;
        if(c == 'W') ans++;
    }

    switch (ans)
    {
    case 0:
        cout << -1;
        break;
    case 1:
    case 2:
        cout << 3;
        break;
    case 3:
    case 4:
        cout << 2;
        break;
    case 5:
    case 6:
        cout << 1;
        break;
    }

    return 0;
}