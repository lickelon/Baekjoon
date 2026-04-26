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
        string s;
        cin >> s;
        int n;
        for(n = 0; n * n < s.length(); n++);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << s[n - i - 1 + j * n];
            }
        }
        cout << "\n";
    }

    return 0;
}