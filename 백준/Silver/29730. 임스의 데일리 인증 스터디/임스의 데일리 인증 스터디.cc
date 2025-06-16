#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    string s;
    cin >> n;
    getline(cin, s);

    vector<string> arr;
    vector<int> boj;
    for(int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        if(s.length() < 8) {
            arr.emplace_back(s);
            continue;
        }
        if(s.substr(0, 7) == "boj.kr/") {
            boj.emplace_back(stoi(s.substr(7)));
        } 
        else arr.emplace_back(s);
    }
    sort(all(arr), [](string &a, string &b) {
        if(a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    for(auto &e : arr) cout << e << "\n";
    sort(all(boj));
    for(auto &e : boj) cout << "boj.kr/" << e << "\n";

    return 0;
}