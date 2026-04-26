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

    int N;
    cin >> N;

    int a = 1, b = 2;
    int ans = 0;
    int sum = 1;
    while(a <= N) {
        if(sum == N) {
            ans++;
            sum -= a;
            a++;
        }
        else if(sum < N) {
            sum += b;
            b++;
        }
        else if(sum > N) {
            sum -= a;
            a++;
        }
    }
    cout << ans;

    return 0;
}