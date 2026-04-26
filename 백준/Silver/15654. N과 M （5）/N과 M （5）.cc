#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int n, m;
vector<int> subset;
bitset<8> bs;
int arr[8];

void search(int d) {
    if(d == m) {
        for(auto u : subset) {
            cout << arr[u] << " ";
        }
        cout << "\n";
    }
    else {
        for(int i = 0; i < n; i++) {
            if(bs[i]) continue;
            subset.push_back(i);
            bs.set(i, 1);
            search(d + 1);
            bs.set(i, 0);
            subset.pop_back();
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    //int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    search(0);

    return 0;
}