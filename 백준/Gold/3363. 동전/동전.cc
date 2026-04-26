#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct measurement {
    int a[4];
    int c;
    int b[4];
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> arr(12, 10);

    measurement input[3];
    for(int i = 0; i < 3; i++) {
        cin >> input[i].a[0] >> input[i].a[1] >> input[i].a[2] >> input[i].a[3];
        string s;
        cin >> s;
        if(s == "<") input[i].c = -1;
        if(s == "=") input[i].c = 0;
        if(s == ">") input[i].c = 1;
        cin >> input[i].b[0] >> input[i].b[1] >> input[i].b[2] >> input[i].b[3];
    }
    vector<int> cand;
    for(int i = 0; i < 24; i++) {
        arr[i/2] += (i%2 ? 1 : -1);
        bool res = true;
        for(int j = 0; j < 3; j++) {
            int sa = 0, sb = 0;
            for(auto u : input[j].a) sa += arr[u-1];
            for(auto u : input[j].b) sb += arr[u-1];
            if(input[j].c == -1) {
                if(sa < sb) res &= true;
                else res &= false;
            }
            if(input[j].c == 0) {
                if(sa == sb) res &= true;
                else res &= false;
            }
            if(input[j].c == 1) {
                if(sa > sb) res &= true;
                else res &= false;
            }
        }
        if(res) cand.push_back(i);
        arr[i/2] = 10;
    }

    if(cand.size() == 1) {
        cout << cand[0] / 2 + 1;
        cout << (cand[0]%2 ? "+" : "-");
    }
    if(cand.size() == 0) cout << "impossible";
    if(cand.size() > 1) cout << "indefinite";

    return 0;
}