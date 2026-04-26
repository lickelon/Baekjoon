#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[4];

    for(int i = 0; i < 4; i++) {
        char input;
        cin >> input;

        if(input == 'S') 
            arr[i] = 0;
        else if(input == 'R')
            arr[i] = 1;
        else
            arr[i] = 2;
    }

    if(arr[0] == arr[1] && arr[2] == arr[3]) {
        if(arr[2] == (arr[0] + 1) % 3) {
            cout << "TK\n";
        }
        else if(arr[0] == (arr[2] + 1) % 3) {
            cout << "MS\n";
        }
        else cout << "?\n";
    }
    else if(arr[0] == arr[1]) {
        if(arr[2] == (arr[0] + 1) % 3 || arr[3] == (arr[0] + 1) % 3) {
            cout << "TK\n";
        }
        else {
            cout << "?\n";
        }
    }
    else if(arr[2] == arr[3]) {
        if(arr[0] == (arr[2] + 1) % 3 || arr[1] == (arr[2] + 1) % 3) {
            cout << "MS\n";
        }
        else {
            cout << "?\n";
        }
    }
    else {
        cout << "?\n";
    }

    return 0;
}