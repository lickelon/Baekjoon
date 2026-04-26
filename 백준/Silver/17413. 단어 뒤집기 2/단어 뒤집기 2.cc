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

    bool is_tag = false;
    string out = "";
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '<') {
            reverse(all(out));
            cout << out;
            out = "";
            is_tag = true;
            cout << s[i];
        }
        else if(s[i] == '>') {
            is_tag = false;
            cout << s[i];
        }
        else if(s[i] == ' ') {
            reverse(all(out));
            cout << out;
            out = "";
            cout << " ";
        }
        else {
            if(is_tag) {
                cout << s[i];
            }
            else {
                out += s[i];
            }
        }
    }
    reverse(all(out));
    cout << out;

    return 0;
}