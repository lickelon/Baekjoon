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

    int N, a, S;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> a;

        S += a;
    }

    if(N == 0 || S == 0)
    {
        cout << "divide by zero\n";
    }
    else
    {
        cout << "1.00\n";
    }

    return 0;
}