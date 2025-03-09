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

    string s;
    cin >> s;

    int n;
    n = s.length();

    string ans = string(50, 'z');
    for(int i = 1; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            string temp = "";
            temp += s.substr(j, n-j);
            temp += s.substr(i, j-i);
            temp += s.substr(0, i);
            reverse(all(temp));
            ans = min(ans, temp);
        }
    }
    cout << ans;

    return 0;
}