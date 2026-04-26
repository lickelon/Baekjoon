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

    int ls, lp;
    cin >> ls >> lp;
    string s;
    cin >> s;
    int cp[4] = {};
    char cst[] = "ACGT";
    int cmp[4];
    for(auto &u : cmp) cin >> u;

    for(int i = 0; i < lp; i++) {
        for(int j = 0; j < 4; j++) {
            if(s[i] == cst[j]) {
                cp[j]++;
            }
        }
    }
    int ans = 0;
    bool check = false;
    for(int i = 0; i < 4; i++) {
        if(cmp[i] > cp[i]) check = true;
    }
    if(!check) ans++;
    for(int i = 0; i < ls - lp; i++) {
        for(int j = 0; j < 4; j++) {
            if(s[i] == cst[j]) {
                cp[j]--;
            }
            if(s[i+lp] == cst[j]) {
                cp[j]++;
            }
        }
        bool check = false;
        for(int i = 0; i < 4; i++) {
            if(cmp[i] > cp[i]) check = true;
        }
        if(!check) ans++;
    }

    cout << ans;

    return 0;
}