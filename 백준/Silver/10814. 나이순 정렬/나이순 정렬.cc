#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

bool compare(pii& a, pii& b)
{
    if(a.first == b.first) return a.second < b.second;
    else return a.first < b.first;
}

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

string name[100000];
vector<pii> _v;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int age;
        cin >> age >> name[i];
        _v.push_back({age,i});
    }

    sort(_v.begin(), _v.end(), compare);

    for(int i = 0; i < n; i++)
    {
        cout << _v[i].first << " " << name[_v[i].second] << "\n";
    }

    return 0;
}