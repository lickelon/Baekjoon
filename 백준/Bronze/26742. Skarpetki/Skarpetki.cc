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

    string s;
    cin >> s;
    int c = 0, b = 0;
    for(auto u : s) {
        if(u == 'B') b++;
        else c++;
    }

    cout << c / 2 + b / 2;

    return 0;
}