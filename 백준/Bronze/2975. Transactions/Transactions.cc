#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    while(true) {
        int a, b;
        string s;
        cin >> a >> s >> b;
        if(a == 0 && s == "W" && b == 0) break;
        if(s == "W") {
            a -= b;
        }
        else {
            a += b;
        }
        cout << (a >= -200 ? to_string(a) : "Not allowed") << '\n';
    }

    return 0;
}