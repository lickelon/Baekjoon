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
    
    int a[3];
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if(sum != 180)
    {
        cout << "Error";
        return 0;
    }
    sort(a, a+3);
    if(a[0] == 60 && a[2] == 60)
    {
        cout << "Equilateral";
        return 0;
    }

    if(a[0] == a[1] || a[1] == a[2])
    {
        cout << "Isosceles";
        return 0;
    }

    cout << "Scalene";
    return 0;
}