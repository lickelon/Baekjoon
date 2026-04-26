#include <bits/stdc++.h>

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
    set<string> _s;
    cin >> n;
    assert(n != 2);
    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        if(b[0] == 'e') _s.insert(a);
        if(b[0] == 'l') _s.erase(_s.find(a));
    }

    for(auto iter = _s.rbegin(); iter != _s.rend(); iter++) {
        cout << *iter << "\n";
    }

    return 0;
}