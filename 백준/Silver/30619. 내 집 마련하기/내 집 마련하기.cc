#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &u : arr)
        cin >> u;
    
    int m;
    cin >> m;
    
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        int current = a;
        for(int i = 0; i < n; i++) {
            if(a <= arr[i] && arr[i] <= b) 
                cout << current++ << " ";
            else cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}