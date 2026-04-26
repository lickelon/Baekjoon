#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(2);

    while(true) {
        double a;
        cin >> a;
        if(a == -1) break;
        cout << "Objects weighing " << a << " on Earth will weigh " << a*0.167 << " on the moon.\n";
    }

    return 0;
}