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
    
    cout << "Gnomes:\n";
    for(int i = 0; i < n; i++) {
        int arr[3];
        int test[3];
        for(int j = 0; j < 3; j++) {
            cin >> arr[j];
            test[j] = arr[j];
        }
        sort(arr, arr + 3);
        if(arr[0] == test[0] && arr[1] == test[1] && arr[2] == test[2]) {
            cout << "Ordered\n";
            continue;
        }
        if(arr[0] == test[2] && arr[1] == test[1] && arr[2] == test[0]) {
            cout << "Ordered\n";
            continue;
        }
        cout << "Unordered\n";
    }

    return 0;
}