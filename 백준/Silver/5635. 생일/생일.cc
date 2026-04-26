#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

using dataType = tuple<string, int, int, int>; 

bool comp(dataType& a, dataType& b) {
    if(get<3>(a) == get<3>(b)){
        if(get<2>(a) == get<2>(b)) {
            return get<1>(a) < get<1>(b);
        }
        return get<2>(a) < get<2>(b);
    }
    return get<3>(a) < get<3>(b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<dataType> arr(n);

    for (int i = 0; i < n; i++) {
        string s;
        int d, m, y;
        cin >> s >> d >> m >> y;
        arr[i] = make_tuple(s, d, m, y);
    }
    sort(arr.begin(), arr.end(), comp);
    
    cout << get<0>(arr.back()) << "\n";
    cout << get<0>(arr.front()) << "\n";

    return 0;
}