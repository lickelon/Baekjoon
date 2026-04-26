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
    cout<<fixed; cout.precision(2);

    int T;
    cin >> T;

    while(T--)
    {
        double a, b;
        cin >> a >> b;
        cout << "The height of the triangle is " << (a*2)/b << " units\n";
    }

    return 0;
}