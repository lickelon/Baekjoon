#include <bits/stdc++.h>

using namespace std;

using pss = pair<string, string>;

bool comp(pss &a, pss &b) {
    if(a.first == b.first) {
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main() {
    int n;
    cin >> n;
    vector<pss> arr(n);
    for(auto &u : arr) {
        cin >> u.first >> u.second;
    }
    sort(arr.begin(), arr.end(), comp);
    for(auto u : arr) {
        cout << u.first << " " << u.second << "\n";
    }
}