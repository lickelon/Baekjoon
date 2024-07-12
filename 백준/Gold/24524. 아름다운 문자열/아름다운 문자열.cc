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

    string s, t;
    cin >> s >> t;
    map<char, int> idx;
    for(int i = 0; i < t.size(); i++) {
        idx[t[i]] = i+1;
    }
    vector<int> cnt(t.size()+1, 0);
    cnt[0] = INF;

    for(int i = 0; i < s.size(); i++) {
        int curr = idx[s[i]];
        if(curr == 0) continue;
        if(cnt[curr] < cnt[curr-1]) cnt[curr] += 1;
    }
    cout << cnt[t.size()];

    return 0;
}