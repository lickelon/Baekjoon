#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int is_palindrome(string s, int t) {
    int n = s.length();
    int ret = 3;
    for(int i = 0; i < n; i++) {
        if(s[i] != s[n-1-i]) {
            if(t == 1) return 2;
            string temp = s.substr(i+1, n-1-i-i);
            ret = min(ret, is_palindrome(temp, 1));
            temp = s.substr(i, n-1-i-i);
            ret = min(ret, is_palindrome(temp, 1));
            break;
        }
    }
    if(ret == 3) ret = t;
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        cout << is_palindrome(s, 0) << "\n"; 
    }

    return 0;
}