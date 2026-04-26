#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

using edge = pair<int, pii>;

int parent[10001];

int find(int a)
{
    if(parent[a] == a) return a;
    return parent[a] = find(parent[a]);
}

bool merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a == b) return false;
    parent[a] = b;
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M, K;

    cin >> N >> M >> K;

    vector<edge> arr(M);

    for(int i = 0; i < M; i++) {
        arr[i].first = i + 1;
        cin >> arr[i].second.first >> arr[i].second.second;
    }
    sort(arr.begin(), arr.end());

    for(int i = 0; i < K; i++) {
        for(int j = 1; j <= N; j++)
            parent[j] = j;
        int ans = 0;
        int t = 0;
        for(int j = i; j < M; j++) {
            if(merge(arr[j].second.first, arr[j].second.second)) {
                ans += arr[j].first;
                t++;
            }
            if(t == N - 1)
                break;
        }
        if(t != N-1) ans = 0;
        cout << ans << " ";
    }


    return 0;
}