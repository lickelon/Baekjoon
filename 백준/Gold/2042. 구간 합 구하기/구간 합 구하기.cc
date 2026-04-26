#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

ll segTree[2097152];
ll lazy[2097152];

void init(ll node, ll value)
{
    for(;node >= 1; node /= 2)
        segTree[node] += value;
}

void propagate(ll node, ll s, ll e)
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

void update(ll node, ll s, ll e, ll l, ll r, ll add)
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

ll query(ll node, ll s, ll e, ll l, ll r)
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

    ll N, M, K;
    ll input;
    
    cin >> N >> M >> K;

    ll NSize = 1;
    for(;NSize < N; NSize *= 2);

    for(ll i = 0; i < N; i++)
    {
        cin >> input;
        init(i + NSize, input);
    }

    for(ll i = 0; i < M + K; i++)
    {
        ll mode, b, c;
        cin >> mode >> b >> c;
        if(mode == 1)
            update(1, 0, NSize - 1, b - 1, b - 1, c - segTree[b + NSize - 1]);
        else if(mode == 2)
            cout << query(1, 0, NSize - 1, b - 1, c - 1) << "\n";
    }
    return 0;
}