#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int n, m;
vector<int> subset;
int arr[13];

void search(int k, int d) {
    if(k == n+1) {
        return;
    }
    if(d == m) {
        for(auto u : subset) {
            cout << arr[u] << " ";
        }
        cout << "\n";
    }
    else {
        subset.push_back(k);
        search(k+1, d+1);
        subset.pop_back();
        search(k+1, d);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    m = 6;

    int mark = 0;

    while(true) {
        cin >> n;
        mark = mark * 10 + n;

        if(n == 0) break;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        search(0, 0);
        cout << "\n";
    }
    return 0;
}