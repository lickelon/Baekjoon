#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool check(string s) {
    stack<char> _st;
    for(auto e : s) {
        if(!_st.empty() && _st.top() == e) _st.pop();
        else _st.push(e);
    }
    return _st.empty();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(check(s)) ans++;
    }
    cout << ans;

    return 0;
}