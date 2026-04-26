#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int input;
    int d = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> input;
        if(input % 2) d--;
        else d++;
    }
    
    if(d>0) cout << "Happy";
    else cout << "Sad";
}