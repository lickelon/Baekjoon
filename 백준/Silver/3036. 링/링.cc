#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++) {
        int a = arr[0];
        int b = arr[i];
        cout << a / gcd(a, b) << "/" << b / gcd(a, b) << "\n";
    }
    return 0;
}
        