#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--)
    {
        double a;
        cin >> a;
        
        cout << fixed;
        cout.precision(2);
        cout << "$" << a * 0.8 << "\n";
    }

    return 0;
}