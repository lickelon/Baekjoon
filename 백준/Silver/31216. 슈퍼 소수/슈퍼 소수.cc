#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool is_prime[318138];


vector<int> sieve(int n) {
    vector<int> prime;
    for(int i = 2; i <= n; i++) {
        if(!is_prime[i]) continue;
        prime.emplace_back(i);
        for(int j = i+i; j <= n; j += i) {
            is_prime[j] = false;
        }
    }
    return prime;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    fill(is_prime+2, is_prime+318138, true);
    vector<int> prime = sieve(318137);
    vector<int> super_prime;
    for(int i = 0; i < prime.size(); i++) {
        if(is_prime[i+1]) super_prime.emplace_back(prime[i]);
    }

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << super_prime[n-1] << "\n";
    }

    return 0;
}