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

    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int i = 0; i < s.length() - 1; i++) {
            if(s[i] == 'O' && s[i+1] == 'I') {
                ans++;
                break;
            }
            if(s[i] == '0' && s[i+1] == '1') {
                ans++;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}