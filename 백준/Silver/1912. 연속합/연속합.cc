#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Max = -0x80000000, Sum = 0, input;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        if(Sum < 0) Sum = input;
        else Sum += input;
        Max = max(Max, Sum);
    }
    cout << Max;
    return 0;
}