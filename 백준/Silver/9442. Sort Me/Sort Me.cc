#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;

        string s;
        cin >> s;
        vector<int> order(26);
        for(int i = 0; i < 26; i++) {
            order[s[i]-'A'] = i;
        }

        vector<string> arr(n);
        for(auto &e : arr) cin >> e;

        ranges::sort(arr, [&](string a, string b) -> bool{
            int i = 0;
            while(i < a.length() && i < b.length()) {
                if(a[i] != b[i]) return order[a[i]-'A'] < order[b[i]-'A'];
                i++;
            }
            return a.length() < b.length();
        });

        cout << "year " << t++ << "\n";
        for(auto e : arr) {
            cout << e << "\n";
        }
    }

    return 0;
}