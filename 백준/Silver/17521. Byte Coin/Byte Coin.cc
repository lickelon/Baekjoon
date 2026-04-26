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
    ll w;
    cin >> w;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll c = 0;
    for(int i = 0; i < n-1; i++) {
        if(arr[i+1] > arr[i]) {
            c += w / arr[i];
            w = w % arr[i];
        }
        else if(arr[i+1] < arr[i]) {
            w += c * arr[i];
            c = 0;
        }
    }

    cout << w + c * arr[n-1];

    return 0;
}