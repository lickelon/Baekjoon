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

    int m;
    cin >> m;
    int set[21] = {};
    while(m--) {
        string s;
        cin >> s;
        if(s == "all") {
            for(int i = 1; i <= 20; i++) {
                set[i] = 1;
            }
            continue;
        }
        else if(s == "empty") {
            for(int i = 1; i <= 20; i++) {
                set[i] = 0;
            }
            continue;
        }

        int x;
        cin >> x;
        if(s == "add") {
            set[x] = 1;
        }
        if(s == "remove") {
            set[x] = 0;
        }
        if(s == "check") {
            cout << set[x] << "\n";
        }
        if(s == "toggle") {
            set[x] = !set[x];
        }
    }

    return 0;
}