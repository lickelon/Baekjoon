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

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    vector<vector<int>> R(k, vector<int>(n));
    vector<vector<int>> M(R);

    for(int i = 0; i < k; i++) {
        for(int j = 0; j < n; j++) {
            cin >> R[i][j];
        }
    }
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < n; j++) {
            cin >> M[i][j];
        }
    }

    function<int(vector<int>, int)> func = [&](vector<int> A, int d) -> int {
        if(d == k) return 0;
        int ret = 0;
        for(int i = 0; i < n; i++) {
            if(A[i] == 0) continue;
            A[i]--;
            for(int j = 0; j < n; j++) {
                if(A[j] == 0) continue;
                A[j]--;
                ret = max(ret, R[d][i]+M[d][j]+func(A, d+1));
                A[j]++;
            }
            A[i]++;
        }
        return ret;
    };

    cout << func(arr, 0);

    return 0;
}