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

    int n, m;
    cin >> n >> m;
    vector<bitset<50>> arr(n);
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s >> s;

        for(int j = 0; j < m; j++) {
            arr[i][j] = (s[j] == 'Y' ? 1 : 0);
        }
        for(int j = m; j < 50; j++) {
            arr[i][j] = 1;
        }
    }

    int ans = n + 1;
    int cnt = 0;
    for(int i = 1; i < (1 << n); i++) {
        bitset<10> bit(i);
        
        bitset<50> tmp;
        for(int j = 0; j < n; j++) {
            if(bit[j])
                tmp |= arr[j];
        }
        if(cnt < tmp.count()) {
            cnt = tmp.count();
            ans = bit.count();
        }
        else if(cnt == tmp.count() && ans > bit.count()) {
            ans = bit.count();
        }
    }

    cout << (cnt == 50-m ? -1 : ans);

    return 0;
}