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
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if(a == 1) {
            int temp = b;
            while(temp <= n) {
                arr[temp-1] = !arr[temp-1];
                temp += b;
            }
        }
        if(a == 2) {
            arr[b-1] = !arr[b-1];
            int temp = 1;
            while(b - temp > 0 && b + temp <= n) {
                if(arr[b-temp-1] == arr[b+temp-1]) {
                    arr[b-temp-1] = arr[b+temp-1] = !arr[b-temp-1];
                }
                else {
                    break;
                }
                temp++;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        if(i % 20 == 19) cout << '\n';
    }
    return 0;
}