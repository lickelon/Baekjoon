#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    set<int> _s;
    for(int i = 0; i < a; i++) {
        int input;
        cin >> input;
        _s.insert(input);
    }
    int ans = a;
    for(int i = 0; i < b; i++) {
        int input;
        cin >> input;
        if(_s.find(input) != _s.end()) {
            ans--;
        }
        else ans++;
    }
    cout << ans;
    return 0;
}