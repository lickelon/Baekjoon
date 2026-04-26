#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    int ans = 0;
    cin >> m;
    for(int i = 1; i < n; i++) {
        int input;
        cin >> input;
        ans = max(ans, input - m);
        m = min(m, input);
    }
    cout << ans;
}