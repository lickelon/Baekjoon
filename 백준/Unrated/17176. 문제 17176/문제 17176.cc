#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int arr[53] = {};
    cin >> n;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    string s;
    getline(cin, s);
    getline(cin, s);
    for(auto u : s) {
        if(u == ' ')
            arr[0]--;
        else if('A' <= u && u <= 'Z')
            arr[u - 'A' + 1]--;
        else
            arr[u - 'a' + 27]--;
    }
    for(int i = 0; i <= 52; i++) {
        if(arr[i] != 0) {
            cout << 'n';
            return 0;
        }
    }
    cout << 'y';
    return 0;
}
            