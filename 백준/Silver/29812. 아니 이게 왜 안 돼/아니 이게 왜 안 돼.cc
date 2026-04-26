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
    int d, m;
    cin >> d >> m;
    int temp = 0;
    int cnt[3] = {};
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if('H' == s[i]) {
            cnt[0]++;
            ans += min(temp * d, m+d);
            temp = 0;
        }
        else if('Y' == s[i]) {
            cnt[1]++;
            ans += min(temp * d, m+d);
            temp = 0;
        }
        else if('U' == s[i]) {
            cnt[2]++;
            ans += min(temp * d, m+d);
            temp = 0;
        }
        else {
            temp++;
        }
    }
    ans += min(temp * d, m+d);
    temp = 0;
    if(ans == 0) {
        cout << "Nalmeok\n";
    }
    else {
        cout << ans << "\n";
    }
    if(min({cnt[0],cnt[1],cnt[2]}) == 0) {
        cout << "I love HanYang University";
    }
    else {
        cout << min({cnt[0],cnt[1],cnt[2]});
    }

    return 0;
}