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
    int t = 0;
    vector<int> arr(n+2, 1);
    for(int i = 2; i <= n; i++) {
        if(!arr[i]) continue;
        for(int j = i; j <= n; j += i) {
            if(arr[j]) {
                t++;
                arr[j] = 0;
                if(t == k) {
                    cout << j;
                    return 0;
                }
            }
        }
    }

    return 0;
}