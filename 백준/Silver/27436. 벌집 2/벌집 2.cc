#include <bits/stdc++.h>

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

    ll n;
    cin >> n;
    if(n == 1) {
        cout << "1";
        return 0;
    }
    n -= 2;
    n /= 6;
    n += 1;
    ll left = 1;
    ll right = 2000000000;
    while(left != right) {
        ll mid = (left + right) / 2;
        ll pivot = mid * (mid + 1) / 2;
        if(pivot < n) left = mid;
        else if(pivot - mid < n) {
            left = right = mid;
        }
        else right = mid;
    }
    cout << left + 1;

    return 0;
}