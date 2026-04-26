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

    int arr[8];

    for(int i = 0; i < 8; i++) {
        cin >> arr[i];
        if(arr[i] == 9) {
            cout << "F";
            return 0;
        }
    }

    cout << "S";

    return 0;
}