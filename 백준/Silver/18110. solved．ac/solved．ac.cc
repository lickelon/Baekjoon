#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

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
    if(n == 0) {
        cout << 0;
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(all(arr));

    int cut = n * 15 + 50;
    cut /= 100;
    int cnt = 0;
    int sum = 0;
    for(int i = cut; i < n - cut; i++) {
        sum += arr[i];
        cnt++;
    }

    cout << (int)(((ld)sum / cnt) + 0.5);

    return 0;
}