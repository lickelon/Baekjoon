#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for(int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5], ans = 0;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    while(true)
    {
        if(arr[0] > 0) arr[0] -= 1;
        else if(arr[1] > 0) arr[1] -= 1;
        else break;

        if(arr[4] > 0) arr[4] -= 1;
        else if(arr[3] > 0) arr[3] -= 1;
        else break;

        if(arr[2] > 0) arr[2] -= 1;
        else if(arr[1] > 0 && arr[3] > 0)
        {
            if(arr[1] + arr[0] > arr[3] + arr[4]) arr[1] -= 1;
            else arr[3] -= 1;
        }
        else
        {
            if(arr[1] > 0) arr[1] -= 1;
            else if(arr[3] > 0) arr[3] -= 1;
            else break;
        }
        ans++;
    }

    cout << ans;
    return 0;
}