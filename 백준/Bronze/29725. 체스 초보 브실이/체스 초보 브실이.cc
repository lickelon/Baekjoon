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

    char ch[] = {'.', 'K', 'k', 'P', 'p', 'N', 'n', 'B', 'b', 'R', 'r', 'Q', 'q'};
    int sc[] = {0,1,3,3,5,9};

    int ans = 0;
    for(int i = 0; i < 8; i++) {
        string s;
        cin >> s;
        for(auto c : s) {
            for(int i = 1; i < 13; i++) {
                if(c == ch[i]) {
                    ans += (i % 2 ? 1 : -1) * sc[(i-1) / 2];
                }
            }
        }
    }
    cout << ans;

    return 0;
}