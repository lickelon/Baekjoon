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

    int a[4];
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    for(int i = 0; i < 4; i++) {
        if(a[i] == x) {
            cout << i+1;
            return 0;
        }
    }

    cout << 0;
    return 0;
}