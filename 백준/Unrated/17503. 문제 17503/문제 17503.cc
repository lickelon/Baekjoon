#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

vector<pll> v;
priority_queue<ll,vector<ll>, greater<ll>> pq;

bool compare(pll& a, pll& b)
{
    if(a.second != b.second)
        return a.second < b.second;
    else
        return a.first > b.first;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M, K;
    cin >> N >> M >> K;


    for(int i = 0; i < K; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), compare);

    ll sum = 0;
    int count = 0;
    int idx;
    for(idx = 0; idx < K; idx++)
    {
        if(count < N)
        {
            sum += v[idx].first;
            count++;
            pq.push(v[idx].first);
        }
        else
        {
            if(pq.top() < v[idx].first)
            {
                sum -= pq.top();
                pq.pop();
                sum += v[idx].first;
                pq.push(v[idx].first);
            }
        }
        if(sum >= M)
            break;
    }
    if(idx == K) cout << -1;
    else if(idx < N - 1) cout << v[N - 1].second;
    else cout << v[idx].second;
    return 0;
}