#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {
        int ans = 0;
        for(int i = n; i <= m; i++) {
            string str = to_string(i);
            sort(str.begin(), str.end());
            bool fail = false;
            for(int j = 1; j < str.length(); j++) {
                if(str[j] == str[j-1]) {
                    fail = true;
                }
            }
            if(!fail) ans++;
        }
        printf("%d\n", ans);
    }
}