#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int ans = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vector<int> arr(m+1);
        for(int j = 1; j <= m; j++) {
            arr[j] = (s[j-1] == '0' ? 0 : 1);
            arr[j] += arr[j-1];
            if(j >= k && arr[j] == arr[j-k]) ans++;
        }
    }
    cout << ans;
}
    