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

    int S, K, H;

    cin >> S >> K >> H;

    int sum = S + K + H;
    if(sum >= 100) cout << "OK";
    else
    {
        if(S < K && S < H) cout << "Soongsil";
        else if(K < S && K < H) cout << "Korea";
        else cout << "Hanyang";
    }

    return 0;
}