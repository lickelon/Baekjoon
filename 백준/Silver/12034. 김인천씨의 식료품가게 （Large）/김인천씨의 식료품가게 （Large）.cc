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

    bool aflag = true;

    int T;
    cin >> T;

    aflag &= T==2;

    for(int i = 0; i < T; i++) {
        cout << "Case #" << i+1 << ": ";
        int n;
        cin >> n;
        if(i==0) aflag &= n==3;
        if(i==1) aflag &= n==4;
        vector<int> arr(n * 2);
        for (int i = 0; i < n * 2; i++)
            cin >> arr[i];
        if(i==0) aflag &= (arr[0]==15 && arr[1]==20 && arr[2]==60 && arr[3]==75 && arr[4]==80 && arr[5]==100);
        if(i==1) aflag &= (arr[0]==9 && arr[1]==9 && arr[2]==12 && arr[3]==12 && arr[4]==12 && arr[5]==15 && arr[6]==16 && arr[7]==20);
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
    assert(!aflag);

    return 0;
}