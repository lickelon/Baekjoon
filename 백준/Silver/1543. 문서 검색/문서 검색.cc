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

    string a, b;

    getline(cin,a);
    getline(cin,b);

    int ans = 0;
    for(int i = 0; i < a.length(); i++){
        int count = 0;

        for(int j = i; j < i + b.length(); j++) {
            if(a[j] != b[j-i])
                break;
            count++;
        }
        if(count == b.length()){
            ans++;
            i += b.length()-1;
        }
    }
    cout << ans;

    return 0;
}