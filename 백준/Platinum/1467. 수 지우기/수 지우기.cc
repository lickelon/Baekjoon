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

    string a, b;
    cin >> a >> b;
    vector<int> cntA(10, 0);
    vector<int> cntB(10, 0);

    for(auto u : a) cntA[u-'0']++;
    for(auto u : b) {
        cntA[u-'0']--;
        cntB[u-'0']++;
    }
    int n = a.length();
    string ans = "";
    for(int i = 0; i < n; i++) {
        for(int j = 9; j >= 0; j--) {
            if(cntA[j] == 0) continue;
            vector<int> temp(10, 0);
            int d = i;
            while(a[d]-'0' != j) temp[a[d++]-'0']++;

            bool flag = true;
            for(int k = 0; k < 10; k++) {
                if(cntB[k] < temp[k]) flag = false;
            }
            if(flag) {
                for(int k = 0; k < 10; k++) {
                    cntB[k] -= temp[k];
                }
                i = d;
                ans += a[i];
                cntA[j]--;
                break;
            }
        }
    }
    cout << ans;

    return 0;
}