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

    int h1, b1, h2, b2;
    cin >> h1 >> b1 >> h2 >> b2;
    int s1 = h1*3 + b1;
    int s2 = h2*3 + b2;
    if(s1 == s2) {
        cout << "NO SCORE";
    }
    else if(s1 > s2) {
        cout << "1 " << s1-s2;
    }
    else {
        cout << "2 " << s2-s1;
    }

    return 0;
}