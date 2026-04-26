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

    int t = 0;
    int l = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(auto u : s) {
        if(u == 'W') t++;
        else {
            switch(t) {
                case 0:
                    l = 1 - l;
                    break;
                case 1:
                    l = 2;
                    break;
                default:
                    break;
            }
        }
    }
    if(t >= 2) {
        if(l == 0) cout << 5;
        if(l == 1) cout << 1;
        if(l == 2) cout << 6;
    }
    else {
        cout << 0;
    }

    return 0;
}