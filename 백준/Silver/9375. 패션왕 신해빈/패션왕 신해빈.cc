#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        map<string, int> _map;
        for(int i = 0; i < n; i++) {
            string a, b;
            cin >> a >> b;
            _map[b]++;
        }
        int ans = 1;
        for(auto u : _map) {
            ans *= u.second + 1;
        }
        cout << ans - 1 << "\n";
    }
}
            
        