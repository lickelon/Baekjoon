#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    int ans = 0;
    for(int i = 0; i < n; i++)
        ans = max(ans, (i + 1) * arr[i]);
    cout << ans;
    return 0;
}