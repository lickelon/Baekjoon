#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

ll segTree[2097152];
ll lazy[2097152];

void init(int node, ll value)
{
    for(;node >= 1; node /= 2)
        segTree[node] += value;
}

void propagate(int node, int s, int e)
{
    if(lazy[node]){
        segTree[node] += (e - s + 1) * lazy[node];
        if(s != e){
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

void update(int node, int s, int e, int l, int r, ll add)
{
    propagate(node,s,e);
    if(r < s || l > e) return;
    if(l <= s && e <= r){
        segTree[node] += (e - s + 1) * add;
        if(s != e){
            lazy[node * 2] += add;
            lazy[node * 2 + 1] += add;
        }
        return;
    }
    update(node * 2, s, (s + e) / 2, l, r, add);
    update(node * 2 + 1, (s + e) / 2 + 1, e, l, r, add);
    segTree[node] = segTree[node * 2] + segTree[node * 2 + 1];
}

ll query(int node, int s, int e, int l, int r)
{
    propagate(node,s,e);
    if(r < s || l > e) return 0;
    if(l <= s && e <= r) return segTree[node];
    return query(node * 2, s, (s + e) / 2, l, r) + query(node * 2 + 1, (s + e) / 2 + 1, e, l, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M, K;
    
    cin >> N >> M >> K;

    int NSize = 1;
    for(;NSize < N; NSize *= 2);

    ll input;
    for(int i = 0; i < N; i++)
    {
        cin >> input;
        init(i + NSize, input);
    }

    for(int i = 0; i < M + K; i++)
    {
        int mode, b, c;
        cin >> mode;
        if(mode == 1)
        {
            ll d;
            cin >> b >> c >> d;
            update(1, 0, NSize - 1, b - 1, c - 1, d);
        }
        else if(mode == 2)
        {
            cin >> b >> c;
            cout << query(1, 0, NSize - 1, b - 1, c - 1) << "\n";
        }
    }
    return 0;
}