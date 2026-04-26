#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int ca[] = {1,2,3,3,4,10};
int cb[] = {1,2,2,2,3,5,10};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    while(true) {
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];

        if(a[0] + a[1] + a[2] + a[3] == 0) break;

        int ans = 0;
        while(!(a[0] == a[1] && a[0] == a[2] && a[0] == a[3])) {
            int temp = a[0];
            a[0] = abs(a[1] - a[0]);
            a[1] = abs(a[2] - a[1]);
            a[2] = abs(a[3] - a[2]);
            a[3] = abs(temp - a[3]);
            ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}