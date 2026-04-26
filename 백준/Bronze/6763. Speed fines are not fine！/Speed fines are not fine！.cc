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

    int a, b;
    cin >> a >> b;
    if(b-a <= 0) cout << "Congratulations, you are within the speed limit!";
    else
    {
        cout << "You are speeding and your fine is $";
        if(b-a <= 20) cout << "100.";
        else if(b-a <= 30) cout << "270.";
        else cout << "500.";
    }

    return 0;
}