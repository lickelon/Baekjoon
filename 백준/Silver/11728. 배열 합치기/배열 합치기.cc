#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    int x = 0, y = 0;
    while(x < n && y < m) {
        if(arr1[x] < arr2[y]) cout << arr1[x++] << " ";
        else cout << arr2[y++] << " ";
    }
    if(x == n) {
        for(;y<m;y++) cout << arr2[y] << " ";
    }
    else if(y == m) {
        for(;x<n;x++) cout << arr1[x] << " ";
    }
}