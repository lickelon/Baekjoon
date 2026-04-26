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

    int input;
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        cin >> input;
        ans += input;
    }
    ans %= 4;

    switch(ans) {
    case 0:
        cout << 'N';
        break;
    case 1:
        cout << 'E';
        break;
    case 2:
        cout << 'S';
        break;
    case 3:
        cout << 'W';
        break;
    }

    return 0;
}