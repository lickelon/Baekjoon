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

    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[n-1] == 'B') {
        vector<pii> arr;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'W') {
                arr.push_back({i, -1});
                while(i < n && s[i] == 'W') {
                    i++;
                }
                arr[arr.size()-1].second = i;
            }
        }
        if(arr.size() == 0) {
            cout << -1;
        }
        else if(arr[0].first == 0) {
            if(arr.size() == 1) {
                cout << -1;
            }
            else {
                cout << arr.size() * 2 - 1 << "\n";
                cout << arr[1].second << "\n";
                cout << arr[0].second << "\n";
                cout << arr[1].first << "\n";
                for(int i = arr.size() - 1; i > 1; i--) {
                    cout << arr[i].second << "\n";
                    cout << arr[i].first << "\n";
                }
            }
        }
        else {
            cout << arr.size() * 2 << "\n";
            cout << arr[0].second << "\n";
            cout << arr[0].first << "\n";

            for(int i = arr.size() - 1; i > 0; i--) {
                cout << arr[i].second << "\n";
                cout << arr[i].first << "\n";
            }
        }
    }
    else {
        vector<pii> arr;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'B') {
                arr.push_back({i, -1});
                while(i < n && s[i] == 'B') {
                    i++;
                }
                arr[arr.size()-1].second = i;
            }
        }
        if(arr.size() == 0) {
            cout << 0;
        }
        else {
            if(arr[0].first == 0) {
                cout << arr.size() * 2 - 1 << "\n";
                cout << arr[0].second << "\n";
            }
            else {
                cout << arr.size() * 2 << "\n";
                cout << arr[0].first << "\n";
                cout << arr[0].second << "\n";
            }
            for(int i = 1; i < arr.size(); i++) {
                cout << arr[i].first << "\n";
                cout << arr[i].second << "\n";
            }
        }
    }
    return 0;
}