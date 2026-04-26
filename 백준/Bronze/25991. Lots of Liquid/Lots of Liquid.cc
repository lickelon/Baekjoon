#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout << fixed; cout.precision(15);

    int n;
    cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++) {
        double input;
        cin >> input;
        sum += pow(input, 3);
    }
    cout << cbrt(sum);

    return 0;
}