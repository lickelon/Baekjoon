#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        int five = 0;
        
        for (int i = 5; i <= N; i *= 5)
            five += N / i;
        cout << five << "\n";
    }
    return 0;
}