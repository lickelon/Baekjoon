#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define PI 3.1415927

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

    for(int i = 1; ; i++) {
        double a, b;
        int c;
        cin >> a >> c >> b;
        if(!c) break;
        cout << "Trip #" << i <<": ";
        cout << a * c / 12.0 / 5280.0 * PI << " " << a * c / 12.0 / 5280.0 * PI / b * 3600 << "\n";
    }
    return 0;
}