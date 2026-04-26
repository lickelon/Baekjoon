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

    int N, M;
    cin >> N >> M;

    set<string> _s;
    for(int i = 0; i < N; i++) {
        string s;
        cin >> s;
        _s.insert(s);
    }

    int ans = 0;
    for(int i = 0; i < M; i++) {
        string s;
        cin >> s;
        if(_s.find(s) != _s.end()) ans++;
    }

    cout << ans;

    return 0;
}