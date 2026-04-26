#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (auto u : s) {
        if(u == '_') ans += 5;
        else if(u == ':') ans += 1;
    }
    cout << s.length() + ans;
    return 0;
}