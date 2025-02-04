#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> get_primes(int n) {
    vector<int> prime;
    vector<int> sieve(n+1);
    for(int i = 2; i <= n; i++) {
        if(sieve[i]) continue;
        prime.emplace_back(i);
        for(int j = i+i; j <= n; j += i) {
            sieve[j] = 1;
        }
    }
    return prime;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> arr = get_primes(1299709);

    int T;
    cin >> T;
    while(T--) {
        int k;
        cin >> k;
        int a = *lower_bound(all(arr), k);
        if(a == k) {
            cout << "0\n";
            continue;
        }
        int b = *(lower_bound(all(arr), k)-1);
        cout << a - b << "\n";
    }

    return 0;
}