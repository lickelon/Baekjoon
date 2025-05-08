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
    cin >> s;

    int num = 1;
    int idx = 0;
    for(auto c : s) {
        while(true) {
            string t = to_string(num);
            int res = t.find(c, idx);
            if(res != -1) {
                idx = res+1;
                break;
            }
            else {
                num += 1;
                idx = 0;
            }
        }
    }
    cout << num;

    return 0;
}