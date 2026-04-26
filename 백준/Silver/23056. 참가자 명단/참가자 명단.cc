#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, string> &a, pair<int, string> &b) {
    if(a.first == b.first) {
        if(a.second.length() == b.second.length())
            return a.second < b.second;
        return a.second.length() < b.second.length();
    }
    return a.first < b.first;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> a, b;
    vector<int> arr(n+1);
    while(true) {
        int c;
        string name;
        cin >> c >> name;
        if(c == 0) break;
        if(arr[c] == m) continue;
        arr[c]++;
        if(c%2 == 0) b.push_back({c, name});
        else a.push_back({c, name});
    }
    sort(a.begin(), a.end(), comp);
    sort(b.begin(), b.end(), comp);
    for(auto u : a) {
        cout << u.first << " " << u.second << "\n";
    }
    for(auto u : b) {
        cout << u.first << " " << u.second << "\n";
    }
    return 0;
}
    