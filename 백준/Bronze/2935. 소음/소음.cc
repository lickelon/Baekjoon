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
    //cout<<fixed; cout.precision(2);

    string a, b, c;
    cin >> a >> b >> c;
    if(b == "*") {
        cout << "1";
        for(int i = 0; i < a.length() + c.length() - 2; i++) {
            cout << "0";
        }
    } else if(a.length() == c.length()){
        a[0] = '2';
        cout << a;
    } else {
        cout << "1";
        for(int i = 1; i < max(a.length(), c.length()); i++) {
            if(i == abs((int)a.length() - (int)c.length())) cout << "1";
            else cout << "0";
        }
    }
    return 0;
}