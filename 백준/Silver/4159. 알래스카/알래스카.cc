#include <bits/stdc++.h>

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

    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        vector<int> arr;

        for(int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            arr.emplace_back(temp);
            arr.emplace_back(2844 - temp);
        }
        sort(arr.begin(), arr.end());
        int before = 0;
        bool flag = true;
        for(auto u : arr) {
            if(u - before > 200) {
                flag = false;
            }
            before = u;
        }
        if(!flag) cout << "IM";
        cout << "POSSIBLE\n";
    }

    return 0;
}