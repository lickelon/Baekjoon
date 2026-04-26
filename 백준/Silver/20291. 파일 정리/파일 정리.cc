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
    cin >> n;
    map<string, int> _m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        stringstream ss(s);
        string temp;
        getline(ss, temp, '.');
        getline(ss, temp, '.');
        _m[temp]++;
    }

    for(auto u : _m) {
        cout << u.first << " " << u.second << "\n";
    }

    return 0;
}