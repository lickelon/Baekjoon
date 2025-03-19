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

    bool ans = true;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'p') {
            if(s.length() - i >= 2 && s[i+1] == 'i') {
                i++;
            }
            else {
                ans = false;
                break;
            }
        }
        else if(s[i] == 'k') {
            if(s.length() - i >= 2 && s[i+1] == 'a') {
                i++;
            }
            else {
                ans = false;
                break;
            }
        }
        else if(s[i] == 'c') {
            if(s.length() - i >= 3 && s[i+1] == 'h' && s[i+2] == 'u') {
                i += 2;
            }
            else {
                ans = false;
                break;
            }
        }
        else {
            ans = false;
            break;
        }
    }
    cout << (ans ? "YES" : "NO");

    return 0;
}