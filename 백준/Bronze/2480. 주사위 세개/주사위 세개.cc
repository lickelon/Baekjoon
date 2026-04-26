#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for(int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int arr[7];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    int ans = 0;
    for(i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        arr[input]++;
    }

    for(i = 1; i <= 6; i++)
    {
        if(arr[i] > 1) break;
        else if(arr[i] == 1) ans = i;
    }
    if(i == 7) cout << ans * 100;
    else if(arr[i] == 2) cout << 1000 + i * 100;
    else cout << 10000 + i * 1000;

    return 0;
}