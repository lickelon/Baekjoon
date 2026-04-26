#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int arr[8001];
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    int M = -INF;
    int m = INF;

    ld sum = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
        arr[input + 4000]++;
        sum += input;
        M = max(M, input);
        m = min(m, input);
    }
    ld av = sum / N;
    cout << (av < 0 ? int(av - 0.5) : int(av + 0.5)) << "\n";

    sort(v.begin(), v.end());

    cout << v[v.size() / 2] << "\n";

    bool isSecond = false;
    int ans = 0;
    int maxC = 0;
    for(int i = 0; i <= 8000; i++)
    {
        if(arr[i] < maxC) continue;
        if(arr[i] == maxC && !isSecond)
        {
            isSecond = true;
            ans = i;
        }
        if(arr[i] > maxC)
        {
            isSecond = false;
            ans = i;
            maxC = arr[i];
        }
    }

    cout << ans - 4000 << "\n";

    cout << M - m << "\n";

    return 0;
}   