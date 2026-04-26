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

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a[6];
        int b[7];
        int sa = 0, sb = 0;
        for(int i = 0; i < 6; i++) {
            cin >> a[i];
            sa += a[i] * ca[i];
        }
        for(int i = 0; i < 7; i++) {
            cin >> b[i];
            sb += b[i] * cb[i];
        }
        cout << "Battle " << i+1 << ": ";
        if(sa == sb) {
            cout << "No victor on this battle field\n";
        }
        else if(sa > sb) {
            cout << "Good triumphs over Evil\n";
        }
        else {
            cout << "Evil eradicates all trace of Good\n";
        }
    }

    return 0;
}