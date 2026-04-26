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
        int n;
        cin >> n;
        double sum = 0;
        while(n--) {
            string s;
            int a;
            double b;
            cin >> s >> a >> b;
            sum += a * b;
        }
        cout << "$" << sum << "\n";
    }

    return 0;
}