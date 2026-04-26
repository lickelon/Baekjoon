#include <bits/stdc++.h>

using namespace std;

int arr[500][500], N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        for(int j = 0; j <= i; j++)
            cin >> arr[i][j];
    
    for(int i = N - 2; i >= 0; i--)
        for(int j = 0; j <= i; j++)
            arr[i][j] += max(arr[i + 1][j], arr[i + 1][j + 1]);

    cout << arr[0][0];
    return 0;
}