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

    int x, n;
    cin >> x >> n;
    for(int i = 0; i < n; i++) {
        int temp = x;
        if(temp % 2) temp *= 2;
        else temp /= 2;
        x = temp ^ 6;
    }    
    cout << x;

    return 0;
}