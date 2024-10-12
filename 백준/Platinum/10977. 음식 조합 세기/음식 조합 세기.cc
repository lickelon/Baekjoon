#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> getPi(vector<int> P) {
    int L = (int)P.size();
    vector<int> Pi(L,0);
    int j = 0;
    for(int i = 1; i < L; ++i) {
        while(j > 0 && P[i] != P[j])
            j = Pi[j-1];
        if(P[i] == P[j])
            Pi[i] = ++j;
    }
    return Pi;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int m, n;
        cin >> m >> n;
        vector<int> arr(m);
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            arr[input-1] = 1;
        }
        int ans = m - getPi(arr)[m-1];
        if(m % ans) cout << m;
        else cout << ans;
        cout << "\n";
    }

    return 0;
}