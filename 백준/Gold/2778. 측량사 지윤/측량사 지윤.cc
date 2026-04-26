#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct line {
    ld a;
    ld b;
    ld c;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(4);
    cout << fixed;
    int T;
    cin >> T;
    while(T--) {
        line arr[3];
        for(int i = 0; i < 3; i++) {
            cin >> arr[i].a >> arr[i].b >> arr[i].c;
        }

        if(arr[0].a*arr[1].b == arr[1].a*arr[0].b
        || arr[1].a*arr[2].b == arr[2].a*arr[1].b
        || arr[2].a*arr[0].b == arr[0].a*arr[2].b) {
            cout << "0.0000\n";
            continue;
        }
        
        pair<ld, ld> dots[3];
        int d1 = 0, d2 = 1;
        dots[0].first = (arr[d1].b*arr[d2].c-arr[d2].b*arr[d1].c) / (arr[d1].a*arr[d2].b-arr[d2].a*arr[d1].b);
        if(arr[d1].b != 0) dots[0].second = -(arr[d1].a/arr[d1].b) * (dots[0].first) - (arr[d1].c/arr[d1].b);
        else dots[0].second = -(arr[d2].a/arr[d2].b) * (dots[0].first) - (arr[d2].c/arr[d2].b);
        d1 = 1; d2 = 2;
        dots[1].first = (arr[d1].b*arr[d2].c-arr[d2].b*arr[d1].c) / (arr[d1].a*arr[d2].b-arr[d2].a*arr[d1].b);
        if(arr[d1].b != 0) dots[1].second = -(arr[d1].a/arr[d1].b) * (dots[1].first) - (arr[d1].c/arr[d1].b);
        else dots[1].second = -(arr[d2].a/arr[d2].b) * (dots[1].first) - (arr[d2].c/arr[d2].b);
        d1 = 2; d2 = 0;
        dots[2].first = (arr[d1].b*arr[d2].c-arr[d2].b*arr[d1].c) / (arr[d1].a*arr[d2].b-arr[d2].a*arr[d1].b);
        if(arr[d1].b != 0) dots[2].second = -(arr[d1].a/arr[d1].b) * (dots[2].first) - (arr[d1].c/arr[d1].b);
        else dots[2].second = -(arr[d2].a/arr[d2].b) * (dots[2].first) - (arr[d2].c/arr[d2].b);
        
        ld s = 0;
        for(int i = 0; i < 3; i++) {
            s += dots[i].first*dots[(i+1)%3].second - dots[i].second*dots[(i+1)%3].first;
        }
        s = abs(s) / 2;
        cout << s << "\n";
    }

    return 0;
}