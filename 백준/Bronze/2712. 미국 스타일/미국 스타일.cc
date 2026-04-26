#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(4);

    int T;
    cin >> T;

    while(T--)
    {
        double a;
        string s;
        cin >> a >> s;
        if(s == "kg") {
            cout << a * 2.2046 << " lb\n";
        }
        if(s == "lb") {
            cout << a * 0.4536 << " kg\n";
        }
        if(s == "l") {
            cout << a * 0.2642 << " g\n";
        }
        if(s == "g") {
            cout << a * 3.7854 << " l\n";
        }
    }

    return 0;
}