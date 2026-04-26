#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF
#define MOD 1000000007

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define MN 1000000
ll fac[MN+10], facinv[MN+10];
ll mpow(ll a, ll x) {
	ll res = 1;
	while (x > 0) {
		if (x % 2) res = (res*a) % MOD;
		a = (a*a) % MOD;
		x /= 2;
	}
	return res;
}
void fac_init() {
	fac[0] = 1;
	for (int i = 1; i <= MN; i++) fac[i] = fac[i - 1] * i % MOD;
	facinv[MN] = mpow(fac[MN], MOD - 2);
	for (int i = MN - 1; i >= 0; i--) facinv[i] = facinv[i + 1] * (i + 1) % MOD;
}
ll C(ll n, ll r) {
	return ((fac[n] * facinv[r]) % MOD) * facinv[n - r] % MOD;
}
ll pow2[MN+10];
void pow_init() {
    pow2[0] = 1;
    for(int i = 1; i <= MN; i++) {
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a, b);
    //assert(!(n == 4 && a == 2 && b == 4));
    fac_init();
    pow_init();
    ll ans = C(a-2 + n-b, a-2);
    ans = (ans * 2) % MOD;
    if(b-a-2 > 0) {
        ans = (ans * pow2[b-a-2]) % MOD;
    }

    if(b-a == 1) {
        ll temp = 0;
        //Case A
        for(int i = 0; i < a-2; i++) {
            temp = (temp + C(n-b+i, i) * pow2[a-2-i-1]) % MOD;
        }
        //Case B
        for(int i = 0; i < n-b; i++) {
            temp = (temp + C(a-2+i, i) * pow2[n-b-i-1]) % MOD;
        }
        ans = (ans + temp) % MOD;
    }
    cout << ans;

    return 0;
}