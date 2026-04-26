#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define PI 3.1415927

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

void rotate(int a[4]) {
    int temp = a[0];
    for(int i = 1; i < 4; i++) {
        a[i-1] = a[i];
    }
    a[3] = temp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(2);

    int n, m, k;
    cin >> n >> m >> k;
    int ans = min(n/2, m);
    int sum = n + m;
    sum -= ans * 3;
    sum -= k;
    while(sum < 0) {
        sum += 3;
        ans -= 1;
    }
    cout << ans;

    return 0;
}