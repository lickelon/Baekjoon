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

    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        stack<char> l, r;
        for(auto c : s) {
            if(c == '<') {
                if(l.empty()) continue;
                r.push(l.top());
                l.pop();
            }
            else if(c == '>') {
                if(r.empty()) continue;
                l.push(r.top());
                r.pop();
            }
            else if(c == '-') {
                if(!l.empty()) l.pop();
            }
            else {
                l.push(c);
            }
        }
        while(!l.empty()) {
            r.push(l.top());
            l.pop();
        }
        while(!r.empty()) {
            cout << r.top();
            r.pop();
        }
        cout << "\n";
    }

    return 0;
}