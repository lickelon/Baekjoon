#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;

    vector<string> arr;
    int n = s.length();

    for(int i = 1; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            string temp = s;
            reverse(temp.begin(), temp.begin()+i);
            reverse(temp.begin()+i, temp.begin()+j);
            reverse(temp.begin()+j, temp.end());
            arr.emplace_back(temp);
        }
    }
    sort(all(arr));
    cout << arr[0];

    return 0;
}