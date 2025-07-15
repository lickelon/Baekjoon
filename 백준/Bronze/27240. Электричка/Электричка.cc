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

    int n, a, b;
    cin >> n >> a >> b;
    int s, t;
    cin >> s >> t;
    if(s > t) swap(s, t);
    
    if(t <= a || b <= s) {
        cout << "Outside";
        return 0;
    }
    if(a < s && t < b) {
        cout << "City";
        return 0;
    }
    cout << "Full";
    return 0;
}