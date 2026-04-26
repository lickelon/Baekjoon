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

    int n, d;
    cin >> n >> d;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        int temp = i;
        while(temp > 0) {
            if(temp % 10 == d) cnt++;
            temp /= 10;
        }
    }
    cout << cnt;

    return 0;
}