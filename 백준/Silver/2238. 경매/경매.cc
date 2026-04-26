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

    int u, n;
    cin >> u >> n;
    vector<string> name(u+1, "");
    vector<int> arr(u+1);

    for(int i = 0; i < n; i++) {
        string s;
        int p;
        cin >> s >> p;
        if(name[p] == "") name[p] = s;
        arr[p]++;
    }

    int ans = 1;
    for(int i = 1; i <= u; i++) {
        if(arr[i] == 0) continue;
        if(arr[ans] == 0 || arr[ans] > arr[i]) {
            ans = i;
        }
    }

    cout << name[ans] << " " << ans;

    return 0;
}