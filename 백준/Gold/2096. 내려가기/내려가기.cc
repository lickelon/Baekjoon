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
    array<int, 3> arr, M, m, temp;
    for(int i = 0; i < 3; i++) M[i] = m[i] = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[0] >> arr[1] >> arr[2];
        temp[0] = max({M[0], M[1]}) + arr[0];
        temp[1] = max({M[0], M[1], M[2]}) + arr[1];
        temp[2] = max({M[1], M[2]}) + arr[2];
        M = temp;

        temp[0] = min({m[0], m[1]}) + arr[0];
        temp[1] = min({m[0], m[1], m[2]}) + arr[1];
        temp[2] = min({m[1], m[2]}) + arr[2];
        m = temp;
    }
    cout << max({M[0], M[1], M[2]}) << " ";
    cout << min({m[0], m[1], m[2]}) << " ";
    return 0;
}