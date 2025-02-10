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

    int T;
    cin >> T;
    while(T--) {
        string s, p;
        cin >> s >> p;
        while(s.find(p) != s.npos) {
            int idx = s.find(p);
            s.replace(idx, p.length(), "-");
        }
        cout << s.length() << "\n";
    }

    return 0;
}