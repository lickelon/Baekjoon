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
        cin >> arr[0];
        arr[arr[0]] = i;
    }

    vector<int> input(n);
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }

    vector<int> arr2(n+1);
    for(int i = 0; i < n; i++) {
        arr2[input[i]] = i;
    }
    bool good = true;
    for(int i = 2; i <= n; i++) {
        if(abs((arr[i] - arr2[i]) - (arr[i-1] - arr2[i-1])) % n != 0) {
            good = false;
        }
    }
    if(good) {
        cout << "good puzzle\n";
        return 0;
    }

    reverse(input.begin(), input.end());
    for(int i = 0; i < n; i++) {
        arr2[input[i]] = i;
    }
    good = true;
    for(int i = 2; i <= n; i++) {
        if(abs((arr[i] - arr2[i]) - (arr[i-1] - arr2[i-1])) % n != 0) {
            good = false;
        }
    }
    if(good) {
        cout << "good puzzle\n";
        return 0;
    }

    cout << "bad puzzle\n";

    return 0;
}