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

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll m;
    cin >> m;
    vector<vector<ll>> edge(26, vector<ll>(26, 0));
    for(int i = 0; i < m; i++) {
        string t;
        cin >> t;
        edge[t[0]-'a'][t[1]-'a'] = i+1;
    }
    ll ans = 0;
    for(int i = 0; i < n-1; i++) {
        vector<ll> seq;
        while(i < n-1 && edge[s[i]-'a'][s[i+1]-'a']) {
            seq.emplace_back(edge[s[i]-'a'][s[i+1]-'a']);
            i++;
        }
        vector<ll> cnt(m + 1);
        if(seq.size() < m) {
            continue;
        }
        ll l = 0;
        ll check = 0;
        for(ll r = 0; r < seq.size(); r++) {
            cnt[seq[r]]++;
            if(cnt[seq[r]] == 1) check++;
            if(check == m) {
                while(cnt[seq[l]] > 1) {
                    cnt[seq[l]]--;
                    l++;
                }
                ans += l + 1;
            }
        }
    }
    cout << ans;

    return 0;
}