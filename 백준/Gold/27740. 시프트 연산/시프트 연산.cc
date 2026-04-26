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
    for(auto &u : arr) cin >> u;

    int l, r;
    l = r = 0;
    int ans = INF;
    pii ansp;
    while(r < n && l < n) {
        while(r < n && arr[r] == 1) {
            r++;
        }
        l = r-1;
        while(r < n && arr[r] == 0) {
            r++;
        }
        int temp = 0;
        temp += min(n-r, l+1);
        temp += n-r + l+1;
        if(temp < ans) {
            ans = temp;
            ansp = {l+1, n-r};
        }
    }
    cout << ans << "\n";
    if(ansp.first <ansp.second) {
        for(int i = 0; i < ansp.first; i++) {
            cout << "L";
        }
        for(int i = 0; i <ansp.first + ansp.second; i++) {
            cout << "R";
        }
    }
    else {
        for(int i = 0; i < ansp.second; i++) {
            cout << "R";
        }
        for(int i = 0; i <ansp.first + ansp.second; i++) {
            cout << "L";
        }
    }
    return 0;
}