#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main() {
    ll n;
    ll arr[20];
    cin >> n;
    if(n == 0) {
        cout << "NO";
        return 0;
    }
    arr[0] = 1;
    for(int i = 1; i < 20; i++)
        arr[i] = arr[i-1] * i;
    
    for(int i = 19; i >= 0; i--)
        if(n >= arr[i]) n -= arr[i];
    if(n) cout << "NO";
    else cout << "YES";
    
    return 0;
}  