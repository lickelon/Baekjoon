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

    while(true) {
        int N;
        cin >> N;
        if(N == 0) break;
        string s;
        getline(cin, s);
        getline(cin, s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        vector<char> ans(s.length());

        int idx = 0;
        int cnt = 0;
        while(cnt < s.length()) {
            for(int i = idx; i < s.length(); i += N) {
                ans[i] = s[cnt];
                cnt++;
            }
            idx++;
        }
        for(auto e : ans) {
            cout << e;
        }
        cout << "\n";
    }

    return 0;
}