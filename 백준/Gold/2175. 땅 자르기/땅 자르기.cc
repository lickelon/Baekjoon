#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ld area(vector<pll> dots) {
    ld sum = 0;
    ll s = dots.size();
    for(int i = 0; i < s; i++) {
        sum += dots[i].first * dots[(i+1)%s].second;
        sum -= dots[i].second * dots[(i+1)%s].first;
    }
    sum = abs(sum);
    return sum / 2;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(3);
    cout << fixed;

    pll dots[4];
    for(int i = 0; i < 4; i++) {
        cin >> dots[i].first >> dots[i].second;
    }

    vector<pll> arr(8);
    for(int i = 0; i < 4; i++) {
        arr[i*2] = {dots[i].first * 2, dots[i].second * 2};
        arr[i*2+1] = {dots[i].first + dots[(i+1)%4].first, 
                      dots[i].second + dots[(i+1)%4].second};
    }
    for(int i = 0; i < 8; i++) {
        arr.emplace_back(arr[i]);
    }
    ld total = area(vector<pll>(dots, dots+4));
    ld gap = total;
    for(int i = 0; i < 16; i++) {
        for(int j = i; j < 16; j++) {
            ld temp = area(vector<pll>(arr.begin()+i, arr.begin()+j)) / 4;
            ld t_gap = abs((total - temp) - temp);
            gap = min(gap, t_gap);
        }
    }
    cout << (total-gap)/2 << " " << (total+gap)/2;

    return 0;
}