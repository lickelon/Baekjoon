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

    unsigned long long n;
    cin >> n;
    if(n == 0) {cout << 0; return 0;}
    unsigned long long left = 0;
    unsigned long long right = 3037000500;
    while(left <= right) {
        unsigned long long mid = (left + right) / 2;
        if(mid*mid >= n) right = mid - 1;
        else left = mid + 1;
    }

    cout << left;

    return 0;
}