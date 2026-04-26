#include <bits/stdc++.h>

using namespace std;

int main()
{
    cout.precision(10);
    long double a, b, ans;
    
    cin >> a >> b;
    
    ans = sqrtl(a * a + b * b);
    cout << a + b - ans;
    
    return 0;
}