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
        string a;
        cin >> a;
        if(a[0] == '#') break;

        bool flag = true;
        while(true) {
            string b;
            cin >> b;
            if(b[0] == '#') break;

            int cnt = 0;
            if(a.length() != b.length()) {
                flag = false;
            }
            else {
                for(int i = 0; i < a.length(); i++) {
                    if(a[i] != b[i]) cnt++;
                }
                if(cnt != 1) flag = false;
            }
            a = b;
        }
        cout << (flag ? "Correct" : "Incorrect") << "\n";
    }

    return 0;
}