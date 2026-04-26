#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(10);

    int T;
    cin >> T;

    while(T--)
    {
        int n;
        cin >> n;
        vector<pii> arr(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i].first;
            arr[i].second = i;
            sum += arr[i].first;
        }
        sort(arr.rbegin(), arr.rend());
        if(arr[0].first == arr[1].first) {
            cout << "no winner\n";
        }
        else {
            if(sum - arr[0].first < arr[0].first) {
                cout << "majority winner " << arr[0].second+1 << "\n";
            }
            else {
                cout << "minority winner " << arr[0].second+1 << "\n";
            }
        }
    }

    return 0;
}