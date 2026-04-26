#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int ca[] = {1,2,3,3,4,10};
int cb[] = {1,2,2,2,3,5,10};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int a, l, r;
        cin >> a >> l >> r;
        if(a == 2) {
            int sum = 0;
            for(int i = l-1; i < r; i++) {
                sum += arr[i];
            }
            cout << sum << "\n";
        }
        else {
            for(int i = l-1; i < r; i++) {
                arr[i] *= arr[i];
                arr[i] %= 2010;
            }
        }
    }

    return 0;
}