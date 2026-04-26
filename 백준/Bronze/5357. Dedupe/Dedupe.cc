#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    //ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << s[0];
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) continue;
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}