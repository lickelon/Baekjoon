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

    int T = 1;
    while(true) {
        string s;
        cin >> s;
        if(s == "0") break;
        while(true) {
            if(s.length() % 2 == 1) {
                cout << "Test " << T++ << ": " << s << "\n";
                break;
            }
            string next = "";
            for(int i = 0; i < s.length(); i += 2) {
                for(int j = 0; j < s[i] - '0'; j++) {
                    next += s[i+1];
                }
            }
            for(int i = 3; i < s.length(); i += 2) {
                if(s[i] == s[i-2]) {
                    next = s;
                }
            }
            if(next == s) {
                cout << "Test " << T++ << ": " << next << "\n";
                break;
            }
            s = next;
        }
    }

    return 0;
}