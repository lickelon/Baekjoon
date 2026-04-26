#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(10);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        int before = 0;
        int ans = 1;
        cout << "Denominations: ";
        while(n--) {
            int temp;
            cin >> temp;
            if(before * 2 > temp) {
                ans = 0;
            }
            before = temp;
            cout << temp;
            if(n) cout << " ";
        }
        cout << "\n";
        cout << (ans ? "Good " : "Bad ") << "coin denominations!\n";
        if(T) cout << "\n";
    }

    return 0;
}