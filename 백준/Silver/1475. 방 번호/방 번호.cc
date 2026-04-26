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

    int arr[9] = {};
    int input;
    cin >> input;
    while(input) {
        int t = input % 10;
        input /= 10;
        if(t == 9) t = 6;
        arr[t] += 1;
    }
    arr[6] = (arr[6] + 1) / 2;
    int ans = 0;
    for(auto u : arr) {
        ans = max(u, ans);
    }

    cout << ans;

    return 0;
}