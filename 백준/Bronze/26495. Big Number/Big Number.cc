#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        switch(s[i]) {
        case '0':
            cout << "0000\n0  0\n0  0\n0  0\n0000\n";
            break;
        case '1':
            cout << "   1\n   1\n   1\n   1\n   1\n";
            break;
        case '2':
            cout << "2222\n   2\n2222\n2\n2222\n";
            break;
        case '3':
            cout << "3333\n   3\n3333\n   3\n3333\n";
            break;
        case '4':
            cout << "4  4\n4  4\n4444\n   4\n   4\n";
            break;
        case '5':
            cout << "5555\n5\n5555\n   5\n5555\n";
            break;
        case '6':
            cout << "6666\n6\n6666\n6  6\n6666\n";
            break;
        case '7':
            cout << "7777\n   7\n   7\n   7\n   7\n";
            break;
        case '8':
            cout << "8888\n8  8\n8888\n8  8\n8888\n";
            break;
        case '9':
            cout << "9999\n9  9\n9999\n   9\n   9\n";
            break;
        }
        if(i != s.length() - 1) cout << "\n";
    }

    return 0;
}