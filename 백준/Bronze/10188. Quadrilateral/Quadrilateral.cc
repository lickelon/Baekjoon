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

    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n; i++) {
        if(i != 0) cout << "\n";
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < b; i++) {
            for(int j = 0; j < a; j++) {
                cout << "X";
            }
            cout << "\n";
        }
    }

    return 0;
}