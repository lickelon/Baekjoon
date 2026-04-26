#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> _s;
    _s.insert("ChongChong");
    for(int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        if(_s.find(a) != _s.end() || _s.find(b) != _s.end()) {
            _s.insert(a);
            _s.insert(b);
        }
    }
    cout << _s.size();
}