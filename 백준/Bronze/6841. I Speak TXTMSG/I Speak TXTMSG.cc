#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while (true) {
        string s;
        cin >> s;
        if (s == "CU") cout << "see you\n";
        else if (s == ":-)") cout << "I’m happy\n";
        else if (s == ":-(") cout << "I’m unhappy\n";
        else if (s == ";-)") cout << "wink\n";
        else if (s == ":-P") cout << "stick out my tongue\n";
        else if (s == "(~.~)") cout << "sleepy\n";
        else if (s == "TA") cout << "totally awesome\n";
        else if (s == "CCC") cout << "Canadian Computing Competition\n";
        else if (s == "CUZ") cout << "because\n";
        else if (s == "TY") cout << "thank-you\n";
        else if (s == "YW") cout << "you’re welcome\n";
        else if (s == "TTYL") {
            cout << "talk to you later\n";
            break;
        }
        else cout << s << "\n";
    }
    return 0;
}