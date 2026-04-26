#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n / 2; i++) {
        arr[s[i] -'a']++;
        arr[s[n-i-1]-'a']--;
    }
    int ans = true;
    for(int i = 0; i < 26; i++) {
        ans &= arr[i] % 2 == 0;
    }
    cout << (ans ? "Yes" : "No");
}
    