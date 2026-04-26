#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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

    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) arr[i] = i+1;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        while(a < b) {
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            a += 1;
            b -= 1;
        }
    }
    for(auto u : arr) cout << u << " ";

    return 0;
}