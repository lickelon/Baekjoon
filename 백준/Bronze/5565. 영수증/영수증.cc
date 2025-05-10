#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int total;
    cin >> total;
    for(int i = 0; i < 9; i++) {
        int input;
        cin >> input;
        total -= input;
    }
    cout << total;

    return 0;
}