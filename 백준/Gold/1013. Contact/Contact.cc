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


    regex re("(100+1+|01)+");
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        cout << (regex_match(s, re) ? "YES" : "NO") << "\n";
    }

    return 0;
}