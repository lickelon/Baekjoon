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

    string s;
    vector<pii> arr(26);
    cin >> s;
    for(int i = 0; i < 52; i++) {
        if(arr[s[i]-'A'].first == 0) arr[s[i]-'A'].first = i+1;
        else arr[s[i]-'A'].second = i+1;
    }

    int ans = 0 ;
    for(int i = 0; i < 26; i++) {
        for(int j = 0; j < 26; j++) {
            if(arr[i].first < arr[j].first && arr[j].first < arr[i].second && arr[i].second < arr[j].second) ans++;
        }
    }
    cout << ans;

    return 0;
}