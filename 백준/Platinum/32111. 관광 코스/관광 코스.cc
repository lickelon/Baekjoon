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
    string s;
    cin >> s;
    s = s + s;
    vector<int> ans(n);
    vector<int> O;
    for(int i = 0; i < n*2; i++) {
        if(s[i] == 'O') {
            O.emplace_back(i);
            ans[i%n] = 1;
        }
    }
    for(int i = 1; i < O.size(); i++) {
        int d = O[i] - O[i-1] - 1;
        if(d > 0 && d%2 == 0) {
            cout << "NO";
            return 0;
        }
        for(int j = 0; j < d; j++) {
            ans[(O[i-1]+j+1)%n] = j < d/2;
        }
    }

    cout << "YES\n";
    for(auto u : ans) {
        cout << (u ? '+' : '-');
    }

    return 0;
}