#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

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
    vector<int> arr(n-1);
    for(auto &e : arr) cin >> e;

    for(int i = 1; i <= n; i++) {
        vector<int> check(n+1);
        bool flag = true;

        check[i] = 1;
        int before = i; 
        for(int j = 0; j < n-1; j++) {
            int x = arr[j] - before;
            if(x < 1 || x > n || check[x]) {
                flag = false;
                break;
            }
            check[x] = 1;
            before = x;
        }
        if(flag) {
            int before = i;
            print("{} ", before);
            for(int j = 0; j < n-1; j++) {
                int x = arr[j] - before;
                print("{} ", x);
                before = x;
            }
            break;
        }
    }

    return 0;
}