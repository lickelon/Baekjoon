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

    int n, m;
    cin >> n >> m;
    vector<int> neg, pos;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(input < 0) neg.push_back(-input);
        else pos.push_back(input);
    }
    sort(all(neg), greater<int>());
    sort(all(pos), greater<int>());

    int ans = 0;
    int M = 0;
    for(int i = 0; i < neg.size(); i += m) {
        ans += neg[i] * 2;
        M = max(M, neg[i]);
    }
    for(int i = 0; i < pos.size(); i += m) {
        ans += pos[i] * 2;
        M = max(M, pos[i]);
    }
    cout << ans - M;

    return 0;
}