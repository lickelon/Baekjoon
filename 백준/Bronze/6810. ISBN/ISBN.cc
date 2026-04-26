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

    int ans = 91;
    int input;
    cin >> input;
    ans += input * 1;
    cin >> input;
    ans += input * 3;
    cin >> input;
    ans += input * 1;
    
    cout << "The 1-3-sum is " << ans;
    return 0;
}