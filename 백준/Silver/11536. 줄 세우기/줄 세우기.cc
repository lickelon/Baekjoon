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

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<string> arr2(arr);
    sort(arr2.begin(), arr2.end());
    if(arr2 == arr) {
        cout << "INCREASING\n";
        return 0;
    }
    sort(arr2.rbegin(), arr2.rend());
    if(arr2 == arr) {
        cout << "DECREASING\n";
        return 0;
    }
    cout << "NEITHER\n";
    return 0;
}