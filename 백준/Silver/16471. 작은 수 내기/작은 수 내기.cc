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

    vector<int> arr1(n), arr2(n);
    for(auto &e : arr1) cin >> e;
    for(auto &e : arr2) cin >> e;

    sort(all(arr1));
    sort(all(arr2));

    int cnt = 0;
    int j = 0;
    for(int i = 0; i < n; i++) {
        while(j < n) {
            if(arr1[i] < arr2[j]) {
                cnt++;
                j++;
                break;
            }
            j++;
        }
    }

    cout << (cnt >= (n+1)/2 ? "YES" : "NO");

    return 0;
}