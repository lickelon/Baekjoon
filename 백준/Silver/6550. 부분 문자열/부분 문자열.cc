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

    string str;
    while(getline(cin, str)) {
        string s, t;
        istringstream iss(str);
        iss >> s >> t;

        int curr = 0;
        for(int i = 0; i < t.length(); i++) {
            if(t[i] == s[curr]) {
                curr++;
            }
        }

        if(curr == s.length()) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    

    return 0;
}