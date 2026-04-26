#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    int n, c;
    cin >> n >> c;
    int a1 = 0, a2 = 0, a3 = 0;
    while(n--) {
        int a;
        string s;
        cin >> a >> s;
        if(s == "bedroom") {
            a2 += a;
        }
        if(s == "balcony") {
            a3 += a;
        }
        a1 += a;
    }
    cout << a1 << "\n" << a2 << "\n" << (a1 - a3 * 0.5) * c;

    return 0;
}