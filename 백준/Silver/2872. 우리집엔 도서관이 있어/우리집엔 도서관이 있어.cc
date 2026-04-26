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
    vector<int> arr(n+1);
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        arr[input] = i;
    }
    int cnt = 1;
    for(int i = n-1; i > 0; i--) {
        if(arr[i] < arr[i+1]) cnt++;
        else break;
    }
    cout << n - cnt;

    return 0;
}