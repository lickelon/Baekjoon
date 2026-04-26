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

    pii arr[] = {{12, 1600}, {11, 894}, {11, 1327}, {10, 1311}, {9, 1004},
                 {9, 1178}, {9, 1357}, {8, 837}, {7, 1055}, {6, 556}, {6, 773}};
    int n;
    cin >> n;
    cout << arr[n-1].first << " " << arr[n-1].second;
    return 0;
}