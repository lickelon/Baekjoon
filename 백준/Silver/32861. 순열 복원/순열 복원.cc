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
    vector<pii> arr(n);
    for(int i = 0; i < n; i++) {
        arr[i].first = i;
        for(int j = 0; j < n; j++) {
            int input;
            cin >> input;
            arr[i].second += input;
        }
    }
    sort(all(arr), [](pii a, pii b){return a.second > b.second;});
    int check = n-1;
    bool flag = true;
    for(int i = 0; i < n; i++) {
        if(arr[i].second != check) flag = false;
        check -= 2;
    }
    if(!flag) {
        cout << -1;
        return 0;
    }
    sort(all(arr));
    for(int i = 0; i < n; i++) {
        cout << (n - 1 - arr[i].second) / 2 + 1 << " ";
    }

    return 0;
}