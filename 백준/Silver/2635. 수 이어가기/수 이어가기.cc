#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int func(int a, int b, int d) {
    if(b < 0) return d;
    return func(b, a-b, d+1);
}
int func2(int a, int b, int d) {
    cout << a << " ";
    if(b < 0) return d;
    return func2(b, a-b, d+1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    int ansi = 0;
    for(int i = 1; i <= n; i++) {
        int temp = func(n, i, 0);
        if(ans < temp) {
            ans = temp;
            ansi = i;
        }
    }
    cout << ans + 1 << "\n";
    func2(n, ansi, 0);
    return 0;
}