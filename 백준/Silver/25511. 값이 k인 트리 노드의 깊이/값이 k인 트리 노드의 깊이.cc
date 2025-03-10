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

    vector<int> arr(n, -1);
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        arr[b] = a;
    }

    int curr;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(input == k) curr = i;
    }

    int ans = 0;
    while(arr[curr] != -1) {
        ans++;
        curr = arr[curr];
    }
    cout << ans;

    return 0;
}