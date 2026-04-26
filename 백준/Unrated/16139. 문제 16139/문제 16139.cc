#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    vector<array<int, 26>> sum(s.length()+1);
    for(int i = 1; i <= s.length(); i++) {
        sum[i] = sum[i-1];
        sum[i][s[i-1]-'a']++;
    }

    int q;
    cin >> q;
    while(q--) {
        string a;
        int l, r;
        cin >> a >> l >> r;
        println("{}", sum[r+1][a[0]-'a'] - sum[l][a[0]-'a']);
    }

    return 0;
}