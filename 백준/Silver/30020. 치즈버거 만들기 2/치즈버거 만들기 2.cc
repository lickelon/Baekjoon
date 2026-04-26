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

    int a, b;
    cin >> a >> b;

    vector<string> ans;

    while(a > b+1) {
        ans.emplace_back("aba");
        a -= 2;
        b -= 1;
    }
    if(a == b + 1 && b > 0) {
        string temp = "a";
        a--;
        while(b) {
            temp += "ba";
            a--;b--;
        }
        ans.emplace_back(temp);
        cout << "YES\n";
        cout << ans.size() << "\n";
        for(auto u : ans) {
            cout << u << "\n";
        }
    }
    else {
        cout << "NO";
    }

    return 0;
}