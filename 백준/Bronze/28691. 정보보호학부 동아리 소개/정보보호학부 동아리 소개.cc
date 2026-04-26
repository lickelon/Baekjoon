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

    char c;
    cin >> c;
    switch (c) {
    case 'M':
        cout << "MatKor";
        break;
    case 'W':
        cout << "WiCys";
        break;
    case 'C':
        cout << "CyKor";
        break;
    case 'A':
        cout << "AlKor";
        break;
    case '$':
        cout << "$clear";
        break;
    }

    return 0;
}