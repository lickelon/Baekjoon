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

    int a, b, c;
    cin >> a >> b >> c;
     if(a + b == c)
        cout << a << '+' << b << '=' <<c;
    else if(a - b == c)
        cout << a << '-' << b << '=' <<c;
    else if(a * b == c)
        cout << a << '*' << b << '=' <<c;
    else if(a / b == c)
        cout << a << '/' << b << '=' <<c;
    else if(a == b + c)
        cout << a << '=' << b << '+' <<c;
    else if(a == b - c)
        cout << a << '=' << b << '-' <<c;
    else if(a == b * c)
        cout << a << '=' << b << '*' <<c;
    else if(a == b / c)
        cout << a << '=' << b << '/' <<c;
    return 0;
}