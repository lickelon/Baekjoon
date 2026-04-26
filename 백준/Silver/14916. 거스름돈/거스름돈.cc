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

    int n;
    cin >> n;

    int ans = 0;
    if(n == 1 || n == 3) {
        cout << -1;
        return 0;
    }
    if(n % 5 == 0) {
        cout << n / 5;
        return 0;
    }
    if(n % 2) {
        int t = n / 5;
        if(t % 2 == 0) t -= 1;
        cout << t + (n-t*5)/2;
    }
    else {
        int t = n / 5;
        if(t % 2 == 1) t -= 1;
        cout << t + (n-t*5)/2;
    }

    return 0;
}