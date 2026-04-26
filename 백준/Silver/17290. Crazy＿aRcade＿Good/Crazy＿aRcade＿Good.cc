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

    int x, y;
    cin >> x >> y;
    x -= 1;
    y -= 1;
    int row[10] = {};
    int col[10] = {};

    for(int i = 0; i < 10; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < 10; j++) {
            if(s[j] == 'o') {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int m1 = 10, m2 = 10;
    for(int i = 0; i < 10; i++) {
        if(row[i] == 0) {
            m1 = min(m1, abs(x - i));
        }
        if(col[i] == 0) {
            m2 = min(m2, abs(y - i));
        }
    }

    cout << m1 + m2;

    return 0;
}