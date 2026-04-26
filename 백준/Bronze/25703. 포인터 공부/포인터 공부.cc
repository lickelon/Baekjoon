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

    int n;
    cin >> n;
    cout << "int a;\n";
    for(int i = 1; i <= n; i++) {
        cout << "int ";
        for(int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "ptr" << (i > 1 ? to_string(i) : "") << " = &";
        if(i == 1) cout << "a;\n";
        else cout << "ptr" << (i > 2 ? to_string(i-1) : "") << ";\n";

    }

    return 0;
}