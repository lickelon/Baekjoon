#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    int a[10];
    for(int i = 0; i < 10; i++)
        cin >> a[i];
    
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        for(int j = i+1; j < 10; j++) {
            ans ^= a[i] || a[j];
        }
    }
    for(int i = 0; i < 10; i++) {
        for(int j = i+1; j < 10; j++) {
            for(int k = j+1; k < 10; k++) {
                ans ^= a[i] || a[j] || a[k];
            }
        }
    }
    cout << ans;
    return 0;
}