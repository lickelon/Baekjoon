#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(c < 0 && d >= 10) 
        cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
    else if(a > c)
        cout << "MCHS warns! Low temperature is expected tomorrow.";
    else if(b < d)
        cout << "MCHS warns! Strong wind is expected tomorrow.";
    else
        cout << "No message";

    return 0;
}