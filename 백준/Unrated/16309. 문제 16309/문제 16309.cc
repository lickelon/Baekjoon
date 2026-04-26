#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> _v;

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if((long double)a.first / a.second == (long double) b.first / b.second) return a.first > b.first;
    return (long double)a.first / a.second > (long double) b.first / b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, goal;

    cin >> N >> goal;

    for(int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;

        _v.push_back({a, b});
    }

    sort(_v.begin(), _v.end(), compare);

    long long fGoal = goal, fProfit = 0;
    long long ans = 0x7FFFFFFF;

    for(int i = 0; i < N; i++)
    {
        fGoal += _v[i].second;
        fProfit += _v[i].first;
        ans = min(ans, (fGoal - 1) / fProfit + 1);
    }
    cout << ans;
    return 0;
}