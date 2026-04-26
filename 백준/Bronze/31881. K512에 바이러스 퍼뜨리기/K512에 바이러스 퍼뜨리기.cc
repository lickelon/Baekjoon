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
    int q;
    cin >> q;
    vector<int> arr(n+1);
    int cnt = 0;
    for(int i =0 ; i < q; i++) {
        int a, b;
        cin >> a;
        
        if(a == 3) {
            cout << n - cnt << "\n";
            continue;
        }
        cin >> b;
        if(a == 1) {
            if(arr[b] == 1) continue;
            arr[b] = 1;
            cnt++;
        }
        if(a == 2) {
            if(arr[b] == 0) continue;
            arr[b] = 0;
            cnt--;
        }
    }

    return 0;
}