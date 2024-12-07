#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int sum(string &a) {
    int ret = 0;
    for(auto e : a) {
        if(e <= '9') {
            ret += e - '0';
        }
    }
    return ret;
}

bool comp(string &a, string &b) {
    if(a.length() != b.length()) {
        return a.length() < b.length();
    }
    if(sum(a) != sum(b)) {
        return sum(a) < sum(b);
    }
    return a < b;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<string> arr(n);
    for(auto &e : arr) {
        cin >> e;
    }
    sort(all(arr), comp);

    for(auto e : arr) {
        cout << e << "\n";
    }

    return 0;
}