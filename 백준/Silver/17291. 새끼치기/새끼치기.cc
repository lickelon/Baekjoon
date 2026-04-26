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

    int arr[24] = {};
    arr[0] = arr[1] = arr[2] = 1;

    for(int i = 1; i < 20; i++) {
        arr[i] += arr[i-1];
        arr[i+1] += arr[i-1];
        arr[i+2] += arr[i-1];
        if(i%2) arr[i+3] += arr[i-1];
    }

    int n;
    cin >> n;
    cout << arr[n-1];


    return 0;
}