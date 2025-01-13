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

    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<int> cnt(26);
    for(int i = 0; i < n; i++) {
        cnt[a[i]-'a']++;
        cnt[b[i]-'a']++;
        if(a[i] == b[i]) cnt[a[i]-'a']--;
    }
    cout << *max_element(all(cnt));

    return 0;
}