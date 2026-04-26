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

    int M = 2, m = 1000000;
    int n;

    int input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        m = min(m, input);
        M = max(M, input);
    }

    cout << m * M;

    return 0;
}