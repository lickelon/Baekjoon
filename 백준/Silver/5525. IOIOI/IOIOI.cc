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

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    vector<int> arr(m);
    if(s[0] == 'I') arr[0] = 1;
    else arr[0] = 0;
    for(int i = 1; i < m; i++) {
        if(s[i] != s[i-1]) arr[i] = arr[i-1]+1;
        else {
            if(s[i] == 'I') arr[i] = 1;
            else arr[i] = 0;
        }
    }

    int tl = n*2+1;
    int ans = 0;
    for(int i = 0; i < m; i++) {
        if(arr[i] - tl >= 0 && (arr[i] - tl) % 2 == 0) {
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}