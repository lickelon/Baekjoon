#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.rbegin(), arr.rend());
    if(arr[0] == 0) {
        cout << 0;
        return 0;
    }
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] >= i+1 && arr[i+1] <= i+1) {
            cout << i + 1;
            return 0;
        }
    }
    cout << n;
    return 0;
}