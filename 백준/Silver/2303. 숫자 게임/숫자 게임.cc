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
    int ans = 0;
    int maxn = -1;
    for(int i = 0; i < n; i++) {
        int arr[5];
        for(int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
        int M = 0;
        for(int i = 0; i < 5; i++) {
            for(int j = i+1; j < 5; j++) {
                for(int k = j+1; k < 5; k++) {
                    M = max(M, (arr[i]+arr[j]+arr[k])%10);
                }
            }
        }
        if(M >= maxn) {
            ans = i+1;
            maxn = M;
        }
    }
    cout << ans;

    return 0;
}