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
        int arr[10];
        int ans = 0;
        for(int i = 0; i < 10; i++) {
            cin >> arr[i];
            cout << arr[i] << " ";
            if(arr[i] == 17) ans += 1;
            if(arr[i] == 18) ans += 2;
        }
        cout << "\n";
        switch(ans) {
        case 0:
            cout << "none\n\n";
            break;
        case 1:
            cout << "zack\n\n";
            break;
        case 2:
            cout << "mack\n\n";
            break;
        case 3:
            cout << "both\n\n";
            break;

        }
    }

    return 0;
}