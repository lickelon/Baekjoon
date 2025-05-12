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
    vector<int> arr(n);
    vector<int> range(n-1);
    for(auto &e : arr) cin >> e;
    for(auto &e : range) cin >> e;

    int M = 0;
    bool flag = true;
    for(int i = 0; i < n-1; i++) {
        if(M < arr[i]) flag = false;
        else {
            M = max(M, arr[i] + range[i]);
        }
    }
    if(M < arr[n-1]) flag = false;

    cout << (flag ? "권병장님, 중대장님이 찾으십니다" : "엄마 나 전역 늦어질 것 같아");

    return 0;
}