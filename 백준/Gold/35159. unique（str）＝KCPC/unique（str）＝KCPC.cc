#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

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
    cin >> s;
    int n = s.length();

    ll ans = 0;
    int p = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'K') {
            ans += i - p;
            p++;
        }
    }
    
    string t;
    for(int i = 0; i < n; i++) {
        if(s[i] != 'K') t.push_back(s[i]);
    }
    for(int i = 0; i < t.length(); i++) {
        if(t[i] == 'C') {
            ans += i;
            t[i] = 'K';
            break;
        }
    }
    for(int i = t.length()-1; i >= 0; i--) {
        if(t[i] == 'C') {
            ans += (t.length()-1) - i;
            t[i] = 'K';
            break;
        }
    }

    string tt;
    for(int i = 0; i < t.length(); i++) {
        if(t[i] != 'K') tt.push_back(t[i]);
    }

    vector<int> arr;
    for(int i = 0; i < tt.length(); i++) {
        if(tt[i] == 'P') arr.emplace_back(i);
    }

    p = arr[arr.size()/2];
    for(int i = 0; i < arr.size(); i++) {
        if(i < arr.size()/2) {
            ans += (p - arr[i] - (arr.size()/2-i));
        }
        else {
            ans += (arr[i] - p - (i - arr.size()/2));
        }
    }
    cout << ans;
 
    return 0;
}