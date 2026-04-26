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

    for(int i = 0; i < T; i++) {
        cout << "Case #" << i+1 << ": ";
        int n;
        cin >> n;
        vector<int> arr(n * 2);
        for (int i = 0; i < n * 2; i++)
            cin >> arr[i];

        for(int i = 0; i < n; i++) {
            sort(all(arr));
            int temp = arr[0];
            temp /= 3;
            temp *= 4;
            cout << arr[0] << " ";
            arr[0] = INF;
            for(int i = 0; i < n * 2; i++) {
                if(arr[i] == temp) {
                    arr[i] = INF;
                    break;
                }
            }
        }
        cout << "\n";
    }

    return 0;
}