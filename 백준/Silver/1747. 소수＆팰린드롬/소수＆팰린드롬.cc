#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool is_palindrome(int k) {
    string s = to_string(k);
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != s[s.length() - i - 1]) return false;
    }
    return true;
}

vector<int> get_pp(int n) {
    vector<int> pp;
    vector<int> sieve(n+1);
    for(int i = 2; i <= n; i++) {
        if(sieve[i]) continue;
        if(is_palindrome(i)) pp.emplace_back(i);
        for(int j = i; j <= n; j += i) {
            sieve[j] = 1;
        }
    }
    return pp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    auto pp = get_pp(10000000);
    int n;
    cin >> n;
    cout << *lower_bound(all(pp), n);

    return 0;
}