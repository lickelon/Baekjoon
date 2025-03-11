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
    vector<array<int, 5>> arr(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];
        }
    }

    vector<set<int>> friends(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            for(int k = 0; k < 5; k++) {
                if(arr[i][k] == arr[j][k]) friends[i].insert(j);
            }
        }
    }

    int ans = 1, M = 0;
    for(int i = 0; i < n; i++) {
        if(M < friends[i].size()) {
            ans = i+1;
            M = friends[i].size();
        }
    }
    cout << ans;

    return 0;
}