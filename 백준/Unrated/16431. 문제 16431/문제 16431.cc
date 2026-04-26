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

    int br, bc;
    int dr, dc;
    int jr, jc;

    cin >> br >> bc;
    cin >> dr >> dc;
    cin >> jr >> jc;

    br = abs(br - jr);
    bc = abs(bc - jc);
    int b = max(br, bc);
    dr = abs(dr - jr);
    dc = abs(dc - jc);
    int d = dr + dc;

    if(b > d) cout << "daisy";
    else if(d > b) cout << "bessie";
    else cout << "tie";

    return 0;
}