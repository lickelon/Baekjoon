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

    int m = n*(n-1)/2;
    vector<ll> arr(m);
    map<ll, ll> base;
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
        base[arr[i]]++;
    }
    if(n == 2) {
        int a = -1000000;
        int b = arr[0] - a;
        cout << min(a, b) << " " << max(a, b);
        return 0;
    }
    sort(all(arr));
    vector<int> ans(n);
    for(int i = 2; i < n; i++) {
        if((arr[0]+arr[1]-arr[i]) % 2) continue;
        map<ll, ll> check(base);
        vector<ll> ans(n);
        ans[0] = (arr[0]+arr[1]-arr[i])/2;
        ans[1] = arr[0] - ans[0];
        ans[2] = arr[1] - ans[0];
        check[arr[0]]--;
        check[arr[1]]--;
        check[arr[i]]--;
        int index = 3;
        
        bool flag = false;
        for(int j = 0; j < m; j++) {
            if(check[arr[j]] == 0) continue;
            ans[index] = arr[j] - ans[0];
            for(int k = 0; k < index; k++) {
                if(check[ans[k] + ans[index]] == 0) {
                    flag = true;
                    break;
                }
                check[ans[k] + ans[index]]--;
            }
            index++;
            if(flag) break;
        }
        if(index < n) continue;
        if(flag) continue;
        for(auto u : ans) {
            cout << u << " ";
        }
        return 0;
    }

    cout << "Impossible";

    return 0;
}