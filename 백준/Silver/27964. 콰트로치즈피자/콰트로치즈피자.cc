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
    set<string> _s;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s.length() >= 6 && s.substr(s.length() - 6, 6) == "Cheese") _s.insert(s);
    }
    if(_s.size() >= 4) cout << "yummy";
    else cout << "sad";

    return 0;
}