#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int arr[100002];

int find(int a)
{
    if(arr[a] == -1) return a;
    else return arr[a] = find(arr[a]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int G, P, input, ans = 0;

    cin >> G >> P;

    fill(&arr[0], &arr[G + 1], -1);

    for(int i = 0; i < P; i++)
    {
        cin >> input;
        int temp = find(input);
        if(temp == 0) break;
        ans++;
        arr[temp] = temp - 1;
    }
    cout << ans;
    return 0;
}