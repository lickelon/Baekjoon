#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int getNum(char c) {
    if(c <= 'Z') return c - 'A';
    return c - 'a' + 26;
}

bool check(vector<int>& a, vector<int>& b) {
    for(int i = 0; i < 52; i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    string w, s;
    cin >> w >> s;
    vector<int> target(52);
    for(auto u : w) target[getNum(u)]++;
    vector<int> cnt(52);
    for(int i = 0; i < n; i++) {
        cnt[getNum(s[i])]++;
    }
    int ans = 0;
    ans += check(target, cnt);
    for(int i = n; i < m; i++) {
        cnt[getNum(s[i])]++;
        cnt[getNum(s[i-n])]--;
        ans += check(target, cnt);
    }
    cout << ans;

    return 0;
}