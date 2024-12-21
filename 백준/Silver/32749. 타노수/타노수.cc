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

    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    int l = 1 << (n-t);
    vector<string> arr;
    for(int i = 0; i < s.length(); i += l) {
        arr.emplace_back(s.substr(i, l));
    }
    sort(all(arr));
    cout << arr.back();

    return 0;
}