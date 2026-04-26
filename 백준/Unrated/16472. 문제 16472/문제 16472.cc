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
    string s;
    cin >> s;
    int cnt[26] = {};
    int l = 0, r = 0;
    int cc = 0;
    int ans = 0;
    while(r < s.length()) {
        if(cnt[s[r]-'a'] == 0) {
            cc++;
        }
        cnt[s[r]-'a']++;
        while(cc > n) {
            cnt[s[l]-'a']--;
            if(cnt[s[l]-'a'] == 0) cc--;
            l++;
        }
        ans = max(ans, r-l+1);
        r++;
    }
    cout << ans;

    return 0;
}