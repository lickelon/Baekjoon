#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool prime[10000];

void sieve() {
    fill(prime, prime+10000, true);
    for(int i = 2; i < 10000; i++) {
        if(!prime[i]) continue;
        for(int j = i *i; j < 10000; j+= i) {
            prime[j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    sieve();
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    set<int> ans;
    for(int i = 1; i < 1 << n; i++) {
        int temp = 0;
        bitset<9> b(i);
        if(b.count() != m) continue;
        for(int j = 0; j < n; j++) {
            if(b[j]) temp += arr[j];
        }
        if(prime[temp]) ans.insert(temp);
    }
    if(ans.size() == 0) cout << -1;
    for(auto u : ans) cout << u << " ";

    return 0;
}