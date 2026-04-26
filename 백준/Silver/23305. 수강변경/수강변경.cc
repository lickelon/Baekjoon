#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> _m;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        _m[input]++;
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(_m[input] > 0) {
            _m[input] -= 1;
        }
        else {
            ans++;
        }
    }
    cout << ans;
}