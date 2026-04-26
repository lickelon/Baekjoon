#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

inline void solve(int C)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int M = -1;
    for(int i = 0; i < n-1; i++) {
        M = max(M, arr[i + 1] - arr[i]);
    }
    cout << "Class " << C << "\n";
    cout << "Max " << arr.back() << ", Min " << arr[0] << ", Largest gap " << M << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout.fixed; cout.precision(15);

    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        solve(i+1);
    }

    return 0;
}