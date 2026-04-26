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

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < s.length(); i++) {
            if(a <= i && i < b) continue;
            cout << s[i];
        } 
        cout << "\n";
    }

    return 0;
}