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

    int T;
    cin >> T;
    while(T--)
    {
        string a, b;
        cin >> a >> b;
        cout << "Distances: ";
        for(int i = 0; i < a.size(); i++)
        {
            cout << (b[i] - a[i] + 26) % 26 << " ";
        }
        cout << "\n";
    }

    return 0;
}