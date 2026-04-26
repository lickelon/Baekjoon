#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    double a, b;
    cin >> a >> b;
    double bmi = a / (b * b);
    if (bmi > 25) cout << "Overweight";
    else if (18.5 <= bmi && bmi <= 25) cout << "Normal weight";
    else cout << "Underweight";
    return 0;
}