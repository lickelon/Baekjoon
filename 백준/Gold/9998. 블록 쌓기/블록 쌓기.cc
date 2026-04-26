#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll Y[300000];
ll D[300000];
int n;

ll calc(ll low) {
	int mid = n / 2;
	int left = mid - 1, right = mid + 1;
    ll ans = abs(Y[mid] - low) + abs(D[mid] - low);
	while (0 <= left && right < n) {
		low++;
		ans += (abs(Y[left] - low) + abs(D[left] - low));
		ans += (abs(Y[right] - low) + abs(D[right] - low));
		left--; right++;
	}
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> Y[i];
    for (int i = 0; i < n; i++)
        cin >> D[i];
    
    ll left = 0;
    ll right = 1000000000000 - n/2;
    ll left_value = calc(left);
    ll right_value = calc(right);

    while(left <= right) {
        ll mid = (left + right) / 2;

        if(left_value < right_value) {
            right = mid - 1;
            right_value = calc(right);
        }
        else {
            left = mid + 1;
            left_value = calc(left);
        }
    }
    if(right < 0) cout << left_value;
    else cout << min(left_value, right_value);

    return 0;
}