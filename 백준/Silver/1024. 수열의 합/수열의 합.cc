#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, l;
    cin >> n >> l;
    for(int i = l; i <= 100; i++) {
        int t = n - i * (i+1) / 2;
        if(t % i) continue;
        int x = t / i + 1;
        if(x < 0) continue;
        for(int j = 0; j < i; j++) {
            cout << x + j << " ";
        }
        return 0;
    }
    cout << -1;
    return 0;
}