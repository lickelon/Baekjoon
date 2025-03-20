#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll ttol(string s) {
    ll ret = 0;
    for(int i = 0; i < s.length(); i++) {
        int temp = 0;
        temp = s[i] - 'a';
        ret *= 26;
        ret += temp;
    }
    return ret;
}

string ltot(ll i) {
    string ret = "aaaaaaaaaaaaa";
    int idx = 0;
    while(i) {
        int temp = i % 26;
        ret[idx] = 'a' + temp;
        idx++;
        i /= 26;
    }
    reverse(all(ret));
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    if(T == 1) {
        ll a, b;
        cin >> a >> b;
        cout << ltot(a+b);
    }
    if(T == 2) {
        string s;
        cin >> s;
        cout << ttol(s);
    }

    return 0;
}