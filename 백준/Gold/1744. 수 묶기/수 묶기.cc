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
    deque<int> neg, pos;
    bool zero = false;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(input == 1) ans += 1;
        else if(input <= 0) neg.emplace_back(input);
        else if(input > 0) pos.emplace_back(input);
    }
    sort(all(neg));
    sort(all(pos), greater<int>());
    if(neg.size() % 2) neg.push_back(1);
    if(pos.size() % 2) pos.push_back(1);

    while(neg.size() >= 2) {
        int a = neg.front(); neg.pop_front();
        int b = neg.front(); neg.pop_front();
        ans += a * b;
    }
    while(pos.size() >= 2) {
        int a = pos.front(); pos.pop_front();
        int b = pos.front(); pos.pop_front();
        ans += a * b;
    }
    cout << ans;
    return 0;
}