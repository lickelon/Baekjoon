#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s = "WelcomeToSMUPC";
    cin >> n;
    cout << s[(n-1)%14];
    return 0;
}