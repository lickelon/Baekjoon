#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for(int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A, B, C;
    A = B = C = 0;

    int T;

    cin >> T;

    if(T % 10)
    {
        cout << "-1";
        return 0;
    }

    while(T >= 300)
    {
        T -= 300;
        A++;
    }

    while(T >= 60)
    {
        T -= 60;
        B++;
    }
    while(T >= 10)
    {
        T -= 10;
        C++;
    }

    cout << A << " " << B << " " << C;

    return 0;
}