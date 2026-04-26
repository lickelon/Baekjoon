#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pii& a, pii& b) {
    if(a.second == b.second) return a.first > b.first;
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<pii> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(all(arr));
    vector<pii> arr2;

    ll score = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i].first > arr[i].second) arr2.push_back(arr[i]);
        else if(score < arr[i].first) score = -1;
        else score += arr[i].second - arr[i].first;
    }
    sort(all(arr2), comp);
    for(int i = 0; i < arr2.size(); i++) {
        if(score < arr2[i].first) score = -1;
        else score += arr2[i].second - arr2[i].first;
    }

    cout << (score >= 0 ? 1 : 0);

    return 0;
}