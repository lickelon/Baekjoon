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

    int n, d;
    cin >> n >> d;
    queue<int> _sq[3], _q;
    for(int i = 1; i <= n; i++) _q.push(i);
    vector<int> p(n+1, 1);
    while(d--) {
        string s;
        cin >> s;
        int t;
        if(s[0] == 'f') t = 0;
        if(s[0] == 's') t = 1;
        if(s[0] == 't') t = 2;
        for(int i = 0; i < n; i++) {
            int curr = _q.front();
            _sq[i%3].push(curr);
            p[curr] &= (t == i%3);
            _q.pop();
        }
        for(int i = 0; i < 3; i++) {
            while(!_sq[i].empty()) _q.push(_sq[i].front()), _sq[i].pop();
        }
    }
    for(int i = 1; i <= n; i++) {
        if(p[i]) cout << i << " ";
    }


    return 0;
}