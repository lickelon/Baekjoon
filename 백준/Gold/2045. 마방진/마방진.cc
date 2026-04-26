#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

string comb[] = {"123", "456", "789", "147", "258", "369", "159", "357"};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[9];
    for(int i = 0; i < 9; i++) {
            cin >> arr[i];
    }

    vector<int> sum(8);
    vector<pii> piv;
    int M = 0;
    for(int i = 0; i < 8; i++) {
        int a[3];
        for(int j = 0; j < 3; j++) a[j] = comb[i][j] - '1';
        vector<int> zeros;
        for(int j = 0; j < 3; j++) {
            sum[i] += arr[a[j]];
            if(!arr[a[j]]) zeros.push_back(a[j]);
        }
        M = max(M, sum[i]);
        if(zeros.size() == 1) {
            piv.push_back({zeros[0], sum[i]});
        }
    }

    int ans = 0;
    if(sum[6] == 0 || sum[7] == 0) {
        if(sum[0] >= sum[1]) {
            ans = sum[2] + (sum[2] + 3*(sum[0]-sum[1])) / 2;
        }
        else {
            ans = sum[0] + (sum[0] + 3*(sum[2]-sum[1])) / 2;
        }
    }
    else {
        ans = M;
    }

    for(auto u : piv) {
        arr[u.first] = ans-u.second;
    }

    for(int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
        if(i % 3 == 2) cout << "\n";
    }

    return 0;
}