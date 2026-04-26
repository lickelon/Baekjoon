#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    switch (n) {
    case 1:
    case 4:
        cout << "\n";
        break;
    default:
        cout << " * * * \n";
        break;
    }
    for (int i = 0; i < 3; i++) {
        switch (n) {
        case 1:
        case 2:
        case 3:
        case 7:
            cout << "      *\n";
            break;
        case 5:
        case 6:
            cout << "*\n";
            break;
        default:
            cout << "*     *\n";
            break;
        }
    }
    switch (n) {
    case 0:
    case 1:
    case 7:
        cout << "\n";
        break;
    default:
        cout << " * * * \n";
        break;
    }
    for (int i = 0; i < 3; i++) {
        switch (n) {
        case 1:
        case 3:
        case 4:
        case 5:
        case 7:
        case 9:
            cout << "      *\n";
            break;
        case 2:
            cout << "*\n";
            break;
        default:
            cout << "*     *\n";
            break;
        }
    }
    switch (n) {
    case 1:
    case 4:
    case 7:
        cout << "\n";
        break;
    default:
        cout << " * * *\n";
        break;
    }
    return 0;
}