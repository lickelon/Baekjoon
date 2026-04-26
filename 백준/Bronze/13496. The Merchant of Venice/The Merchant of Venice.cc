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

    int K;
    cin >> K;
    for(int i = 0; i < K; i++) {
        int n, s, d;
        cin >> n >> s >> d;
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            if(a <= s * d) ans += b;
        }
        cout << "Data Set " << i+1 << ":\n" << ans << "\n\n";
    }

    return 0;
}