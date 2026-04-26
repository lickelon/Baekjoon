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
    getline(cin, s);
    string target = "UCPC";
    int current = 0;
    for(auto u : s) {
        if(u == target[current]) {
            current++;
            if(current == 4) break;
        }
    }
    if(current == 4) cout << "I love UCPC";
    else cout << "I hate UCPC";

    return 0;
}