#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    sort(arr.rbegin(), arr.rend());
    for(int i = 0; i < n; i++) {
        if(arr[i] < i+1) {
            cout << i;
            return 0;
        }
    }
    cout << n;
    return 0;
}