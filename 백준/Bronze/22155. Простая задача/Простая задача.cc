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
    //cout<<fixed; cout.precision(10);

    int T;
    cin >> T;

    while(T--)
    {
        int i, f;
        cin >> i >> f;
        cout << ((i <= 2 && f <= 1) || (i <= 1 && f <= 2) ? "Yes\n" : "No\n"); 
    }

    return 0;
}