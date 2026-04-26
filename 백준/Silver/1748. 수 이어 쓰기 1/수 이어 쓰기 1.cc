#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0, i = 1;
    while (i <= n) {
        ans += (n-i+1);
        i *= 10;
    }
    cout << ans;
    return 0;
}