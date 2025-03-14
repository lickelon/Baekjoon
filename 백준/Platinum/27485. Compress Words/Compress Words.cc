#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> getPi(string P) {
    int L = (int)P.size();
    vector<int> Pi(L,0);
    int j = 0;
    for(int i = 1; i < L; ++i) {
        while(j > 0 && P[i] != P[j])
            j = Pi[j-1];
        if(P[i] == P[j])
            Pi[i] = ++j;
    }
    return Pi;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    string ans;
    cin >> ans;
    for(int i = 1; i < n; i++) {
        string s;
        cin >> s;
        int l = min(s.length(), ans.length());
        string t = s.substr(0, l) + "~" + ans.substr(ans.length()-l);
        auto Pi = getPi(t);
        ans += s.substr(min(l, Pi.back()));
    }
    cout << ans;

    return 0;
}