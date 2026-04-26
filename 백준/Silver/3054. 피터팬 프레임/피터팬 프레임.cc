#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    cout << ".";
    for(int i = 0; i < s.length(); i++) {
        if(i % 3 != 2) cout << ".#..";
        else cout << ".*..";
    }

    cout << "\n.";
    for(int i = 0; i < s.length(); i++) {
        if(i % 3 != 2) cout << "#.#.";
        else cout << "*.*.";
    }

    cout << "\n#";
    for(int i = 0; i < s.length(); i++) {
        cout << ".";
        cout << s[i];
        if(i % 3 == 0 || (i % 3 == 1 && i == s.length() - 1)) cout << ".#";
        else cout << ".*";
    }

    cout << "\n.";
    for(int i = 0; i < s.length(); i++) {
        if(i % 3 != 2) cout << "#.#.";
        else cout << "*.*.";
    }
    
    cout << "\n.";
    for(int i = 0; i < s.length(); i++) {
        if(i % 3 != 2) cout << ".#..";
        else cout << ".*..";
    }

    return 0;
}