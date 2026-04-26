#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

vector<pair<int, pair<int, int>>> v;

int arr[1001];

int find(int idx)
{
    if (arr[idx] == -1)
        return idx;
    return arr[idx] = find(arr[idx]);
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a != b)
        arr[b] = a;
}

bool comp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    return a.first > b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p, w;
    int c, r;

    cin >> p >> w;
    cin >> c >> r;

    fill(arr, arr + 1001, -1);

    for (int i = 0; i < w; i++)
    {
        int start, end, width;

        cin >> start >> end >> width;

        v.push_back({width, {start, end}});
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < w; i++)
    {
        merge(v[i].second.first, v[i].second.second);
        if (find(c) == find(r))
        {
            cout << v[i].first;
            break;
        }
    }
    return 0;
}