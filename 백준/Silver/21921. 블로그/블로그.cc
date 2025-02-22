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

    int n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    vector<int> sum(n-x+1);
    for(int i = 0; i < x; i++) {
        sum[0] += arr[i];
    }

    for(int i = 1; i < n-x+1; i++) {
        sum[i] = sum[i-1] + arr[i+x-1] - arr[i-1];
    }

    int M = -1, cnt = 0;
    for(auto e : sum) {
        if(M == e) cnt++;
        else if(M < e){
            M = e;
            cnt = 1;
        }
    }
    if(M == 0) cout << "SAD";
    else cout << M << "\n" << cnt;

    return 0;
}