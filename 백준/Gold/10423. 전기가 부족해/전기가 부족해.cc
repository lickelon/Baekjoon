#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

vector<pair<int, pair<int, int>>> v;
int arr[1001];

int find(int idx)
{
    if (arr[idx] == -1 || arr[idx] == idx)
        return idx;
    return arr[idx] = find(arr[idx]);
}

bool isPowered(int idx)
{
    idx = find(idx);
    if(arr[idx] == idx) return true;
    return false;
}

bool comp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.first < b.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    int ans = 0;
    int count = 0;

    cin >> N >> M >> K;

    fill(arr, arr + 1001, -1);

    for(int i = 0; i < K; i++)
    {
        int input;
        cin >> input;
        arr[input] = input;
        count++;
    }

    for (int i = 0; i < M; i++)
    {
        int start, end, cost;
        cin >> start >> end >> cost;
        v.push_back({cost, {start, end}});
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < M; i++)
    {
        int x = find(v[i].second.first), y = find(v[i].second.second);
        if(x != y)
        {
            if(!(isPowered(x) && isPowered(y)))
            {
                if(isPowered(x)) arr[y] = x;
                else arr[x] = y;
                ans += v[i].first;
                count++;
                if(count == N)
                {
                    cout << ans;
                    break;
                }
            }
        }

    }

    return 0;
}