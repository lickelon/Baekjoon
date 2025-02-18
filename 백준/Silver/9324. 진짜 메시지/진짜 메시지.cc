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
        int cnt[26] = {};
        bool flag = true;
        for(int i = 0; i < s.length(); i++) {
            int a = s[i]-'A';
            cnt[a]++;
            if(cnt[a] % 4 == 0) {
                flag &= s[i] == s[i-1];
            }
        }
        for(int i = 0; i < 26; i++) {
            if(cnt[i] % 4 == 3) flag = false;
        }
        cout << (flag ? "OK" : "FAKE") << "\n";
    }

    return 0;
}