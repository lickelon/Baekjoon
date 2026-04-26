#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll result = 1;

    cin >> n;

    for (int i = 1; i <= n / 2; i++)
    {
        ll temp = i * 2 - 1;
        temp = temp % 1000000007;
        result *= temp;
        result = result % 1000000007;
    }
    
    cout << result;

    return 0;
}