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

    int a, b, g;
    cin >> a >> b >> g;
    map<string, int> _m;
    for(int i = 0; i < a; i++) {
        string s;
        cin >> s;
        _m[s] = 0;
    }
    for(int i = 0; i < b; i++) {
        string s;
        cin >> s;
        _m[s] = 1;
    }
    int ans[2] = {};
    for(int i = 0; i < g; i++) {
        string s;
        cin >> s;
        ans[_m[s]]++;
    }
    if(ans[0] == ans[1]) cout << "TIE";
    else cout << (ans[0] < ans[1] ? "B" : "A");
    
    return 0;
}