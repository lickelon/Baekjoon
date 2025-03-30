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

    int T;
    cin >> T;

    while(T--) {
        ll n, m, k, d;
        cin >> n >> m >> k >> d;
        ll b = 0;
        while(n*m*b*(k*(m-1)+m*(n-1)) <= 2*d) b++;
        if(b <= 1) {
            cout << "-1\n";
            continue;
        }
        cout << (n*m*(b-1)*(k*(m-1)+m*(n-1)))/2 << "\n";
    }

    return 0;
}