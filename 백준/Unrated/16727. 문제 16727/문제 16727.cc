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

    int p1, s1, s2, p2;
    cin >> p1 >> s1 >> s2 >> p2;
    if(p1 + p2 == s1 + s2) {
        if(p1 == s2) cout << "Penalty";
        else if(s1 > p2) cout << "Esteghlal";
        else cout << "Persepolis";
    }
    else if(p1 + p2 > s1 + s2) cout << "Persepolis";
    else cout << "Esteghlal";

    return 0;
}