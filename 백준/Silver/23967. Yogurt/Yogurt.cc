#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int ans = 0;
        int d = 1, dc = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] >= d) {
                dc++;
                ans++;
            }
            if(dc == k) {
                d++;
                dc = 0;
            }
        }
        cout << "Case #" << i << ": " << ans << "\n";
    }
}