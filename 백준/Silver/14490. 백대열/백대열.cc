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

    string s;
    cin >> s;
    istringstream ss(s);
    string buf;
    vector<string> arr;

    while(getline(ss, buf, ':')) {
        arr.push_back(buf);
    }

    int a = atoi(arr[0].c_str());
    int b = atoi(arr[1].c_str());

    cout << a / gcd(a,b) << ":" << b / gcd(a,b);

    return 0;
}