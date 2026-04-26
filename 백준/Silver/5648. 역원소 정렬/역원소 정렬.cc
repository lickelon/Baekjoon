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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    for(int i = 0; i < n; i++) {
        queue<ll> _q;
        while(arr[i] != 0) {
            _q.push(arr[i]%10);
            arr[i] /= 10;
        }
        while(!_q.empty()) {
            arr[i] *= 10;
            arr[i] += _q.front(); _q.pop();
        }
    }
    sort(arr.begin(), arr.end());

    for(auto u : arr) {
        cout << u << "\n";
    }

    return 0;
}