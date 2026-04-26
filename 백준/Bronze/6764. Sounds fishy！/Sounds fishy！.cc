#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

ll gcd(ll a, ll b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int before;
    int state = 1;
    int input;

    cin >> input;
    before = input;
    for (int i = 0; i < 3; i++)
    {
        cin >> input;
        if (before > input)
            state *= 2;
        if (before < input)
            state *= 1;
        if (before == input)
            state *= 3;
        before = input;
    }
    if(state == 8) cout << "Fish Diving";
    else if(state == 27) cout << "Fish At Constant Depth";
    else if(state == 1) cout << "Fish Rising";
    else cout << "No Fish";
    
    return 0;
}