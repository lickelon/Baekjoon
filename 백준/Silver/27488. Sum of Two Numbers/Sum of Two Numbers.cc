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
        int n;
        cin >> n;
        int sum = 0;
        for(int temp = n; temp > 0; temp /= 10) {
            sum += temp % 10;
        }
        int s_sum = 0;
        int target = sum / 2;
        stack<int> as;
        for(int temp = n; temp > 0; temp /= 10) {
            if(temp % 10 >= target - s_sum) {
                as.push(target-s_sum);
                s_sum += target-s_sum;
            }
            else {
                as.push(temp % 10);
                s_sum += temp % 10;
            }
        }
        int ans = 0;
        while(!as.empty()) {
            ans *= 10;
            ans += as.top(); as.pop();
        }
        cout << n - ans << " " << ans << "\n";
    }

    return 0;
}