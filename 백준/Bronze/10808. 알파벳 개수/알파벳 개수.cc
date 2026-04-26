#include <bits/stdc++.h>

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

    int arr[26] = {};
    string s;
    cin >> s;

    for(auto u : s) {
        arr[u-'a']++;
    }

    for(auto u : arr) {
        cout << u << " ";
    } 

    return 0;
}