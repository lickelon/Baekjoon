#include <bits/stdc++.h>

using namespace std;

int N, input, L[1000001], len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> input;
        int *pos = lower_bound(L, L + len, input);
        *pos = input;
        if(pos == L + len) len += 1;
    }
    cout << len;
    return 0;
}