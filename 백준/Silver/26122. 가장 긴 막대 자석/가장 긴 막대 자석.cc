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

    int N;
    cin >> N;
    vector<int> arr;
    string s;
    cin >> s;
    char before = s[0];
    int l = 1;

    for(int i = 1; i < N; i++) {
        if(before != s[i]) {
            arr.emplace_back(l);
            l = 1;
        }
        else {
            l += 1;
        }
        before = s[i];
    }
    arr.emplace_back(l);
    int ans = 0;
    for(int i = 1; i < arr.size(); i++) {
        ans = max(ans, min(arr[i-1], arr[i]) * 2);
    }

    cout << ans;

    return 0;
}