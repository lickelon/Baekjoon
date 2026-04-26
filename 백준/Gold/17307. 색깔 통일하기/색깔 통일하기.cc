#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll arr[250001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll N, C;
    cin >> N >> C;
    
    ll sum = 0, rsum = 0;

    ll before;
    cin >> before;
    for(int i = 0; i < N - 1; i++)
    {
        ll input;
        cin >> input;

        arr[i] = (input - before + C) % C;
        sum += arr[i];
        before = input;
    }

    ll _min = sum;
    ll min_idx = 1;

    for(int i = 0; i < N - 1; i++)
    {
        sum -= arr[i];
        rsum += (C - arr[i]) % C;
        if(_min > max(sum, rsum))
        {
            _min = max(sum, rsum);
            min_idx = i + 2;
        }
    }
    cout << min_idx << "\n" << _min;
    return 0;
}