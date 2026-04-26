#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    
    vector<int> arr2(n);
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    
    sort(all(arr1));
    sort(arr2.rbegin(), arr2.rend());
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += arr1[i] * arr2[i];
    }
    cout << ans;
}