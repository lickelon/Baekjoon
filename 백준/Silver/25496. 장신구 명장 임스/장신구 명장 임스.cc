#include <bits/stdc++.h>

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

    int P, N;

    cin >> P >> N;

    vector<int> _v(N);
    for (int i = 0; i < N; i++)
        cin >> _v[i];
    
    sort(_v.begin(), _v.end());

    int ans = 0;
    for(int i = 0; i < N; i++) {
        if(P >= 200) break;
        P += _v[i];
        ans++;
    }

    cout << ans;

    return 0;
}