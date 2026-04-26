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

    int n, m;
    cin >> n >> m;
    vector<int> pt(n);
    for(int i = 0; i < n; i++) cin >> pt[i];
    int maxsc = -1, maxi = 0;
    for(int i = 0; i < m; i++) {
        int id;
        cin >> id;
        int sum = 0;
        string s;
        for(int i = 0; i < n; i++) {
            cin >> s;
            if(s[0] == 'O') sum += pt[i];
        }
        if(maxsc < sum) {
            maxsc = sum;
            maxi = id;
        }
        else if(maxsc == sum) {
            if(maxi > id) maxi = id;
        }
    }
    cout << maxi << " " << maxsc;
    return 0;
}