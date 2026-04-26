#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

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

    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> odd, even;
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2) odd.emplace_back(arr[i]);
            else even.emplace_back(arr[i]);
            arr[i] %= 2;
        }
        sort(all(odd));
        sort(rall(even));
        int oi = 0, ei = 0;
        cout << "Case #" << i << ": ";
        for(int i = 0; i < n; i++) {
            if(arr[i]) cout << odd[oi++];
            else cout << even[ei++];
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}