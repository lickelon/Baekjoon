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

    int n, m, k, a, b, c;
    cin >> n >> m >> k >> a >> b >> c;

    vector<pair<int, string>> arr;
    arr.emplace_back(n*a,"Joffrey");
    arr.emplace_back(m*b, "Robb");
    arr.emplace_back(k*c, "Stannis");
    ranges::sort(arr, [](pair<int, string> a, pair<int, string> b){
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    });

    cout << arr[0].second << " ";
    if(arr[0].first == arr[1].first) {
        cout << arr[1].second << " ";
        if(arr[1].first == arr[2].first) {
            cout << arr[2].second;
        }
    }

    return 0;
}