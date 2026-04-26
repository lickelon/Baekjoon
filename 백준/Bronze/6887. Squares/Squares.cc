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

    int i = 0;
    while (true) {
        if (i * i > n) {
            cout << "The largest square has side length " << i - 1 << ".";
            break;
        }
        i++;
    }
    return 0;
}