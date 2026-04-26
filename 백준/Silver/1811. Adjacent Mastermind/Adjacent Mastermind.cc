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

    while(true) {
        string a, b;
        cin >> a;
        if(a[0] == '#') break;
        cin >> b;
        string s = b;
        int bl, gr, wh;
        bl = gr = wh = 0;
        for(int i = 0; i < a.size(); i++) {
            if(b[i] == a[i]) {
                bl++;
                a[i] = ' ';
                b[i] = ' ';
                continue;
            }
            if(i > 0 && b[i] == a[i-1]) {
                gr++;
                a[i-1] = ' ';
                b[i] = ' ';
            }
            if(i > 0 && b[i-1] == a[i]) {
                gr++;
                a[i] = ' ';
                b[i-1] = ' ';
            }
        }
        sort(all(a));
        sort(all(b));
        int ai = 0;
        int bi = 0;
        while(ai < a.size() && bi < b.size()) {
            if(a[ai] == ' ') {
                ai++;
                continue;
            }
            if(b[bi] == ' ') {
                bi++;
                continue;
            }
            if(a[ai] == b[bi]) {
                wh++;
                ai++;
                bi++;
            }
            else if(a[ai] < b[bi]) ai++;
            else bi++;
        }
        cout << s << ": " << bl << " black, " << gr << " grey, " << wh << " white\n";
    }

    return 0;
}