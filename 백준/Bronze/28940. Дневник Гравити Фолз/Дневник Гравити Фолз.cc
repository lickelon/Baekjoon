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

    int w, h;
    cin >> w >> h;
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = ((w/a) * (h/b));
    if(cnt == 0) cout << -1;
    else {
        cout << (n%cnt ? n/cnt+1 : n/cnt);
    }
    
    return 0;
}