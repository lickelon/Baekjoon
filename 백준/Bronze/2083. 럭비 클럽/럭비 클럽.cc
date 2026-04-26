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

    while(true) {
        string name;
        int age, weight;
        cin >> name >> age >> weight;
        if(name[0] == '#') break;
        if(age > 17 || weight >= 80) {
            cout << name << " Senior\n";
        }
        else {
            cout << name << " Junior\n";
        }
    }

    return 0;
}