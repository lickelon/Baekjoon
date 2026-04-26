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

    int Ysum = 0, Msum = 0;
    int input;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        Ysum += ((input) / 30 + 1) * 10;
        Msum += ((input) / 60 + 1) * 15;
    }

    if(Ysum <= Msum) cout << "Y ";
    if(Msum <= Ysum) cout << "M ";
    cout << min(Ysum, Msum);

    return 0;
}