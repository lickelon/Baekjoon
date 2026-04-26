#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    long long ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += (arr[i] - arr[i-1]) * arr[i-1];
    }
    cout << ans;
    return 0;
}