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

    string s;
    cin >> s;

    int n = s.length();

    unordered_set<string> _s;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= n-i; j++) {
            _s.insert(s.substr(i, j));
        }
    }
    cout << _s.size();
 
    return 0;
}