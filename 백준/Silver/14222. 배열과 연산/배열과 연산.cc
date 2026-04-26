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

    int n, k;
    cin >> n >> k;
    vector<int> arr(n+k+1);
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[input]++;
    }
    for(int i = 1; i <= n; i++) {
        if(arr[i] == 0) {
            cout << 0;
            return 0;
        }
        if(arr[i] > 1) {
            arr[i+k] += arr[i] - 1;
            arr[i] = 1;
        }
    }

    cout << 1;
    return 0;
}