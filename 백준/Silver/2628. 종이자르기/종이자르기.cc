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

    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    vector<int> r;
    r.push_back(0);
    r.push_back(a);
    vector<int> c;
    c.push_back(0);
    c.push_back(b);
    for(int i = 0; i < n; i++) {
        int d, num;
        cin >> d >> num;
        if(d) r.push_back(num);
        else c.push_back(num);
    }
    sort(all(r));
    int rmax = 0;
    for(int i = 1; i < r.size(); i++) {
        rmax = max(rmax, r[i] - r[i-1]);
    }
    sort(all(c));
    int cmax = 0;
    for(int i = 1; i < c.size(); i++) {
        cmax = max(cmax, c[i] - c[i-1]);
    }

    cout << rmax * cmax;
    

    return 0;
}