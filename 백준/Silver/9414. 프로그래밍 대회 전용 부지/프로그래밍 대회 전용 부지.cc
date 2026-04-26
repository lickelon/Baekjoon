#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        vector<int> arr;
        while(true) {
            int input;
            cin >> input;
            if(input == 0) break;
            arr.emplace_back(input);
        }
        sort(arr.rbegin(), arr.rend());
        int ans = 0;
        for(int i = 0; i < arr.size(); i++) {
            int tmp = 1;
            for(int j = 0; j <= i; j++)
                tmp *= arr[i];
            ans += 2 * tmp;
            if(ans > 3000000) break;
        }
        if(ans > 3000000) {
            cout << "Too expensive\n";
        }
        else cout << ans << "\n";
    }
}