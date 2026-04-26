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

    int A, B;
    ld M, result;
    cin >> A >> B;
    
    M = ld(B - A) / 400;
    result = 1 / (1 + pow(10, M));

    cout << result << endl;
    return 0;
}