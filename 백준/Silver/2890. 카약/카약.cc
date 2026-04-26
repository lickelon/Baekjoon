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

    int r, c;
    cin >> r >> c;
    vector<string> arr(r);
    for(auto& u : arr) {
        cin >> u;
    }
    vector<int> rank(9);
    int curr_rank = 1;
    for(int i = c - 2; i > 0; i--) {
        bool flag = false;
        for(int j = 0; j < r; j++) {
            if(arr[j][i] != '.') {
                int num = arr[j][i] - '1';
                if(rank[num] != 0) continue;
                rank[num] = curr_rank;
                flag = true;
            }
        }
        if(flag) curr_rank++;
    }
    for(auto u : rank) {
        cout << u << "\n";
    }
    return 0;
}