#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string ans = "";
    string input;

    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        switch (input[i])
        {
        case '0':
            ans += "000";
            break;
        case '1':
            ans += "001";
            break;
        case '2':
            ans += "010";
            break;
        case '3':
            ans += "011";
            break;
        case '4':
            ans += "100";
            break;
        case '5':
            ans += "101";
            break;
        case '6':
            ans += "110";
            break;
        case '7':
            ans += "111";
            break;
        }
    }

    bool nonzero = false;

    for (int i = 0; i < ans.length(); i++) {
        if(!nonzero && ans[i] == '0') continue;
        else {
            nonzero = true;
            cout << ans[i];
        }
    }
    if(!nonzero) cout << "0";

    return 0;
}