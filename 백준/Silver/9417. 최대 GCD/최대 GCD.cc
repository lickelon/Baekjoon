#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    string _;
    getline(cin, _);
    while(N--) {
        vector<ll> arr;
        string s;
        getline(cin, s);
        istringstream iss(s);
        string temp;
        while(getline(iss, temp, ' ')) {
            arr.push_back(atoi(temp.c_str()));
        }
        ll ans = 0;
        for(int i = 0; i < arr.size() - 1; i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                ans = max(ans, gcd(arr[i], arr[j]));
            }
        }
        cout << ans << "\n";
    }

    return 0;
}