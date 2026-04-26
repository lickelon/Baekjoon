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

    int n, m;
    cin >> n >> m;
    int left = 1;
    int right = m;
    int j;
    cin >> j;
    int ans = 0;
    for(int i = 0; i < j; i++) {
        int input;
        cin >> input;
        if(left <= input && input <= right) {}
        else if(input < left) {
            int gap = left - input;
            left -= gap;
            right -= gap;
            ans += gap;
        }
        else if(right < input) {
            int gap = input - right;
            left += gap;
            right += gap;
            ans += gap;
        }
    }

    cout << ans;

    return 0;
}