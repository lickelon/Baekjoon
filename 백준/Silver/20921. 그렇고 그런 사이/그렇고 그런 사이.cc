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
    
    vector<int> arr;
    for(int i = n-1; i > 0; i--) {
        if(k >= i) {
            arr.emplace_back(n-1-i);
            k -= i;
        }
    }

    int num = 1;
    int idx = 0;
    for(int i = 0; i < n; i++) {
        if(arr.size() > idx && i == arr[idx]) {
            cout << n - idx << " ";
            idx++;
        }
        else {
            cout << num << " ";
            num++;
        }
    }

    return 0;
}