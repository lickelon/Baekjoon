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
    while(t--) {
        int a = 0, b = 0;
        int n;
        cin >> n;
        while(n--) {
            string sa, sb;
            cin >> sa >> sb;
            if(sa == sb) continue;
            if(sa == "R" && sb == "S") a++;
            if(sa == "R" && sb == "P") b++;
            if(sa == "S" && sb == "R") b++;
            if(sa == "S" && sb == "P") a++;
            if(sa == "P" && sb == "R") a++;
            if(sa == "P" && sb == "S") b++;
        }
        if(a == b) cout << "TIE\n";
        else if(a > b) cout << "Player 1\n";
        else cout << "Player 2\n";
    }

    return 0;
}