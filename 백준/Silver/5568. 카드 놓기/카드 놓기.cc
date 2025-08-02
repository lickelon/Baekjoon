#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<string> arr;
vector<bool> check;
set<string> _s;
int n, k;

void func(int x, string s) {
    if(x == k) _s.insert(s);

    for(int i = 0; i < n; i++) {
        if(check[i]) continue;
        check[i] = true;
        func(x+1, s+arr[i]);
        check[i] = false;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    arr = vector<string>(n);
    check = vector<bool>(n);
    for(auto &e : arr) cin >> e;

    func(0, "");
    cout << _s.size();

    return 0;
}