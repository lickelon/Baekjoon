#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    c -= abs(a) + abs(b);
    if(c >= 0 && c % 2 == 0) cout << "YES";
    else cout << "NO";
}