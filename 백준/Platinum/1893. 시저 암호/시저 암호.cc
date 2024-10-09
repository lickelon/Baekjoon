#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> getPi(vector<int> &P) {
    vector<int> Pi(P.size(),0);
    int j = 0;
    for(int i = 1; i < P.size(); ++i) {
        while(j > 0 && P[i] != P[j])
            j = Pi[j-1];
        if(P[i] == P[j])
            Pi[i] = ++j;
    }
    return Pi;
}

int KMP(vector<int> &S, vector<int> &P) {
    auto Pi = getPi(P);
    int cnt = 0, j = 0;
    for(int i = 0; i < S.size(); ++i) {
        while(j > 0 && S[i] != P[j])
            j = Pi[j-1];
        if(S[i] == P[j]) {
            if(j == P.size() - 1) {
                cnt++;
                j = Pi[j];
            }
            else {
                j++;
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        string a, w, s;
        cin >> a >> w >> s;
        map<char, int> _m;
        int n = a.length();
        for(int i = 0; i < n; i++) {
            _m[a[i]] = i;
        }
        vector<int> P(w.size());
        for(int i = 0; i < w.size(); i++) {
            P[i] = _m[w[i]];
        }
        vector<int> S(s.size());
        for(int i = 0; i < s.size(); i++) {
            S[i] = _m[s[i]];
        }
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(KMP(S, P) == 1) ans.emplace_back(i);
            for(auto &u : P) {
                u = (u + 1) % n;
            }
        }
        if(ans.size() == 0) {
            cout << "no solution\n";
            continue;
        }
        else {
            cout << (ans.size() == 1 ? "unique: " : "ambiguous: ");
            for(auto u : ans) {
                cout << u << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}