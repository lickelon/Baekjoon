#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321

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

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    reverse(all(arr));

    auto Pi = getPi(arr);
    int k, p;
    k = p = INF;
    for(int i = 0; i < n; i++) {
        int ck = n - (i+1);
        int cp = (i+1) - Pi[i];
        if(ck + cp < k + p) {
            k = ck;
            p = cp;
        }
    }
    cout << k << " " << p;

    return 0;
}