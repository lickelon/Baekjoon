#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> permutation;
vector<pair<char,ll>> _m;
vector<bool> _check;
int M;
ll bits = 0;
ll ans;

void solve()
{
	if (permutation.size() == M)
	{
        for(int i = 0; i < M; i++) {
            if(!_check[i] && permutation[i] == 0) return;
        }
        ll temp = 0;
		for (int i = 0; i < M; i++)
		{
            temp += permutation[i] * _m[i].second;
		}
        if(temp == 0) {
            ans++;
        }
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{

			if (bits & (1 << i)) continue;
			bits ^= 1 << i;
			permutation.push_back(i);
			solve();
			bits ^= 1 << i;
			permutation.pop_back();
		}
	}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        vector<string> arr(n);
        map<char, ll> m;
        for(int i = 0; i < n-1; i++) {
            cin >> arr[i];
            ll mult = 1;
            for(int j = 0; j < arr[i].length(); j++) mult *= 10;
            for(int j = 0; j < arr[i].length(); j++) {
                mult /= 10;
                m[arr[i][j]] += mult;
            }
        }
        cin >> arr[n-1];
        ll mult = 1;
        for(int j = 0; j < arr[n-1].length(); j++) mult *= 10;
        for(int j = 0; j < arr[n-1].length(); j++) {
            mult /= 10;
            m[arr[n-1][j]] -= mult;
        }
        vector<bool> check(m.size(), true);
        vector<pair<char, ll>> v(all(m)); 
        for(int i = 0; i < check.size(); i++) {
            for(auto u : arr) {
                if(u.length() == 1) continue;
                if(u[0] == v[i].first) {
                    check[i] = false;
                }
            }
        }
        M = v.size();
        _m = v;
        _check = check;
        bits = 0;
        ans = 0;
        solve();
        cout << ans << "\n";
    }

    return 0;
}