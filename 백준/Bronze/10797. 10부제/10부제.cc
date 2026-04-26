#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b;
    int ans = 0;
    cin >> a;
    
    for(int i = 0; i < 5; i++)
    {
        cin >> b;
        if(b == a) ans++;
    }
    cout << ans;
}