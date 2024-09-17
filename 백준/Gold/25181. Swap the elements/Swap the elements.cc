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
    for(auto &u : arr) cin >> u;
    vector<int> arr2(arr);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr2[j] != arr[i] && arr2[i] != arr[j]) {
                int temp = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] == arr2[i]) {
            cout << -1;
            return 0;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}