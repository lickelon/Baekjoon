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

    int a, b, c;
    cin >> a >> b >> c;
    if((a + b + c) % 3 == 0) cout << "*";
    else {
        if(a == b) cout << "C";
        if(a == c) cout << "B";
        if(b == c) cout << "A";
    }

    return 0;
}