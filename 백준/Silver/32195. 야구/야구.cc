#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<ll> arr(1);
    int foul = 0;
    for(int i = 0; i < n; i++) {
        pll input;
        cin >> input.first >> input.second;
        if(input.second >= input.first && input.second >= -input.first) {
            arr.emplace_back(input.first*input.first+input.second*input.second);
        }
        else {
            foul++;
        }
    }
    sort(all(arr));

    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        ll R;
        cin >> R;
        int l = 0, r = arr.size();
        while(l + 1 < r) {
            int mid = (l+r)/2;
            if(arr[mid] <= R*R) {
                l = mid;
            }
            else {
                r = mid;
            }
        }
        cout << foul << " " << l << " " << arr.size()-l-1 << "\n";
    }
    

    return 0;
}