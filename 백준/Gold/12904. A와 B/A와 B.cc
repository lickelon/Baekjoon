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

    string s,t;
    cin >> s >> t;

    while(t.length()) {
        if(s==t){
            cout << 1;
            return 0;
        }
        char c = t[t.length()-1];
        t.erase(t.length()-1);
        if(c=='B') {
            reverse(all(t));
        }
    }
    cout<<0;

    return 0;
}