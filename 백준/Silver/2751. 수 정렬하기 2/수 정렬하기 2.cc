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

vector<int> _v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a;

        cin >> a;
        _v.push_back(a);
    }

    sort(_v.begin(), _v.end());

    for(int i = 0; i < n; i++)
    {
        cout << _v[i] << "\n";
    }    

    return 0;
}