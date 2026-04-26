#include <bits/stdc++.h>

using namespace std;

int dp[301][2];

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &u : arr)
        cin >> u;
    if(n == 1) {
        cout << arr[0];
        return 0;
    }
    dp[0][0] = arr[0];
    dp[1][0] = arr[1];
    dp[1][1] = arr[0] + arr[1];
    for(int i = 2; i < n; i++) {
        dp[i][0] = max(dp[i-2][0], dp[i-2][1]) + arr[i];
        if(dp[i-1][0]) dp[i][1] = dp[i-1][0] + arr[i];
    }
    cout << max(dp[n-1][0], dp[n-1][1]);
}