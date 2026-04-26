#include <bits/stdc++.h>

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
    if(s.length() == 1) {
        cout << "0\n";
        if((s[0] - '0') % 3 == 0) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
        return 0;
    }

    int sum = 0;
    for(auto u : s) {
        sum += u - '0';
    }
    int step = 1;
    while(sum >= 10) {
        int temp;
        temp = sum;
        sum = 0;
        while(temp) {
            sum += temp % 10;
            temp /= 10;
        }
        step++;
    }
    if(sum % 3 == 0){
        cout << step << "\n";
        cout << "YES\n";
    }
    else {
        cout << step << "\n";
        cout << "NO\n";
    }

    return 0;
}