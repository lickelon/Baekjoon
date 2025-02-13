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
    vector<array<int, 3>> arr(n);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[j][i];
        }
    }
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        arr[i][2] = a[0];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(abs(arr[i][0] - arr[j][0]) <= arr[i][1] + arr[j][1]) {
                if(arr[i][2] != arr[j][2]) {
                    cout << "YES\n";
                    cout << i+1 << " " << j+1;
                    return 0;
                }
            }
        }
    }
    cout << "NO";

    return 0;
}