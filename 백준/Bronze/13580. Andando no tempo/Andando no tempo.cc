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

    int a[3];

    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    sort(a,a+3);

    if(a[0]==a[1] || a[1]==a[2] || a[0]+a[1]==a[2])
    {
        cout << "S";
    }
    else
    {
        cout << "N";
    }

    return 0;
}