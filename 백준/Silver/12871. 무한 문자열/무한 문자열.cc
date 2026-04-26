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

    string a, b;
    cin >> a >> b;

    string ca, cb;

    ca = "";
    for(int i = 0; i < b.length(); i++) {
        ca += a;
    }
    for(int i = 0; i < a.length(); i++) {
        cb += b;
    }

    cout << (ca==cb);

    return 0;
}