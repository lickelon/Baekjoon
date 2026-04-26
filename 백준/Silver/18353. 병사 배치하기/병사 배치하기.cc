#include <bits/stdc++.h>

using namespace std;

int N, input, L[1000001], len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;
    vector<int> arr(N);
    for(auto &u : arr) cin >> u;
    reverse(arr.begin(), arr.end());
    for(int i = 0; i < N; i++)
    {
        input = arr[i];
        int *pos = lower_bound(L, L + len, input);
        *pos = input;
        if(pos == L + len) len += 1;
    }
    cout << N - len;
    return 0;
}