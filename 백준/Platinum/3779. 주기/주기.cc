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

    int t = 1;
    while(true) {
        int n;
        cin >> n;
        if(n==0) break;
        string s;
        cin >> s;

        cout << "Test case #" << t << "\n";

        auto Pi = getPi(s);
        for(int i = 0; i < n; i++) {
            int len = i+1 - Pi[i];
            if(Pi[i] != 0 && (i+1) % len == 0)
                cout << (i+1) << " " << (i+1)/len << "\n";
        }
        cout << "\n";
        t++;
    }

    return 0;
}