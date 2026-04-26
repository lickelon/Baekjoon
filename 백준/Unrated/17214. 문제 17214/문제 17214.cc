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

    int n1 = 0, n2 = 0;
    int i;
    bool neg;
    if(s[0] == '-') {
        neg = true;
        i = 1;
    }
    else {
        neg = false;
        i = 0;
    }
    for(; i < s.length(); i++) {
        if(s[i] == 'x') break;
        n1 *= 10;
        n1 += s[i] - '0';
    }
    if(neg) n1 *= -1;
    if(s[i] == 'x') {
        if(i == s.length() - 1) {
            if(abs(n1) == 2) cout << (neg?"-":"") << "xx+W";
            else cout << n1 / 2 << "xx+W";
            return 0;
        }
        if(s[i+1] == '-') {
            neg = true;
        }
        else {
            neg = false;
        }
        i += 2;
        for(; i < s.length(); i++) {
            if(s[i] == 'x') break;
            n2 *= 10;
            n2 += s[i] - '0';
        }
        if(neg) n2 *= -1;
        if(abs(n1) == 2) {
            cout << (n1<0?"-":"") << "xx";
        }
        else {
            cout << n1 / 2 << "xx";
        }
        if(abs(n2) == 1) {
            cout << (neg ? "-" : "+") << "x+W";
        }
        else if(n2 == 0) {
            cout << "+W";
        }
        else {
            cout << (neg ? "" : "+") << n2 << "x+W";
        }
        return 0;
    }
    if(abs(n1) == 1) cout << (neg?"-":"") << "x+W";
    else if(n1 == 0) cout << "W";
    else cout << n1 << "x+W";

    return 0;
}