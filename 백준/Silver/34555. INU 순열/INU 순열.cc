#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < (n/2); i++) {
        int x = (n/2)+1;
        print("{} {} ", x+i, x-1-i);
    }
    if(n%2) print("{}", n);
    
}