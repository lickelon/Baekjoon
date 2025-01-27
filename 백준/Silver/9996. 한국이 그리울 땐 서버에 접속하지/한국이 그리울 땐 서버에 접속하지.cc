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

    string pat;
    cin >> pat;
    string new_pat = pat.substr(0, pat.find("*")) + ".*" + pat.substr(pat.find("*")+1);

    regex re(new_pat);
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << (regex_match(s, re) ? "DA" : "NE") << "\n";
    }
    return 0;
}