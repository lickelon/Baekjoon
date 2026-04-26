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

    int k;
    cin >> k;

    int arr[46];
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i <= 45; i++) {
        arr[i] = arr[i-1]+arr[i-2];
    }
    cout << arr[k-1] << " " << arr[k];

    return 0;
}