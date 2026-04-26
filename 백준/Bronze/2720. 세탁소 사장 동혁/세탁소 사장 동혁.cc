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
        int c;
        cin >> c;
        cout << c / 25 << " ";
        c %= 25;
        cout << c / 10 << " ";
        c %= 10;
        cout << c / 5 << " ";
        c %= 5;
        cout << c << "\n";
    }

    return 0;
}