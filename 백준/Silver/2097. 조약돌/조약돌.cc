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

    int n;
    cin >> n;
    int a = 0;
    while(a * a < n) {
        a++;
    }
    a--;
    if(a * a + a >= n) {
        cout << max(4, a * 4 - 2);
    }
    else {
        cout << max(4, a * 4);
    }

    return 0;
}