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
    sort(all(arr));
    vector<vector<ll>> ans;
    for(int i = 2; i < n; i++) {
        if((arr[0]+arr[1]-arr[i]) % 2) continue;
        map<ll, ll> check(base);
        vector<ll> temp(n);
        temp[0] = (arr[0]+arr[1]-arr[i])/2;
        temp[1] = arr[0] - temp[0];
        temp[2] = arr[1] - temp[0];
        if(ans.size() > 0 && temp[2] == ans[ans.size()-1][2]) continue;
        check[arr[0]]--;
        check[arr[1]]--;
        check[arr[i]]--;
        int index = 3;
        
        bool flag = false;
        for(int j = 0; j < m; j++) {
            if(check[arr[j]] == 0) continue;
            temp[index] = arr[j] - temp[0];
            for(int k = 0; k < index; k++) {
                if(check[temp[k] + temp[index]] == 0) {
                    flag = true;
                    break;
                }
                check[temp[k] + temp[index]]--;
            }
            index++;
            if(flag) break;
        }
        if(index < n) continue;
        if(flag) continue;
        ans.push_back(vector<ll>(temp));
    }

    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++) {
        for(auto u : ans[i]) {
            cout << u << " ";
        }
        cout << "\n";
    }

    return 0;
}