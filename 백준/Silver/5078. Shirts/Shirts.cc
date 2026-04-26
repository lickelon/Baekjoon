#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(string a, string b) {
    if(a[0] == b[0]) {
        return a[1] < b[1];
    }
    else return a[0] > b[0];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(true){
        int w;
        cin >> w;
        if(!w) break;
        vector<string> arr;
        for(int i = 0; i < w; i++) {
            string input;
            cin >> input;
            arr.emplace_back(input);
        }
        int h;
        cin >> h;
        for(int i = 0; i < h; i++) {
            string input;
            cin >> input;
            arr.emplace_back(input);
        }
        sort(all(arr), comp);
        for(auto u : arr) {
            cout << u << " ";
        }
        cout << "\n";
    }

    return 0;
}