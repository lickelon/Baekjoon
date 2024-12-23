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

    map<int, int> f, r;
    for(int i = 0; i < 10; i++) {
        int input;
        cin >> input;
        f[i] = input;
        r[input] = i;
    }
    string a, b;
    cin >> a >> b;
    for(auto &e : a) e = r[e-'0']+'0';
    for(auto &e : b) e = r[e-'0']+'0';
    int sum = stoi(a)+stoi(b);
    string ss = to_string(sum);
    for(auto &e : ss) e = f[e-'0']+'0';
    cout << ss;

    return 0;
}