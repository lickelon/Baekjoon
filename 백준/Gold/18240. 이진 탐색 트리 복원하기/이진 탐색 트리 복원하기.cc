#include <bits/stdc++.h>


#define INF 0x7FFFFFFF

#define loop(x) for (int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

int arr[300010];

deque<int> d[300010];

int result[300010];

int cnt = 1, N;

void solve(int depth)
{
    if (d[depth + 1].size() > 0)
        solve(depth + 1);
    result[d[depth].front()] = cnt++;
    d[depth].pop_front();
    if (d[depth + 1].size() > 0)
        solve(depth + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;

    cin >> N;

    fill(arr, arr + 300000, 0);
    arr[0] = 1;
    d[0].push_back(0);

    for (int i = 1; i < N; i++)
    {
        cin >> input;

        arr[input] += 1;
        if (arr[input] > arr[input - 1] * 2)
        {
            cout << "-1";
            return 0;
        }
        else
        {
            d[input].push_back(i);
        }
    }
    solve(0);

    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}