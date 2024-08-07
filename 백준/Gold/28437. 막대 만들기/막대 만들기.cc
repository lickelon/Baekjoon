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
    vector<int> arr(100001);
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[input] += 1;
    }
    for(int i = 1; i <= 100000; i++) {
        for(int j = i*2; j <= 100000; j += i) {
            arr[j] += arr[i];
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int input;
        cin >> input;
        cout << arr[input] << " ";
    }

    return 0;
}