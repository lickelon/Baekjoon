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

    int T;
    cin >> T;
    while(T--) {
        int arr[9];
        for(int i = 0; i < 9; i++) cin >> arr[i];
        arr[8] += arr[5];
        arr[5] = 0;
        int pos = 1;
        int i = 0;
        deque<int> ans;
        while(i < 9) {
            if(arr[i] == 0) {
                i++;
                continue;
            }
            if(pos>0) ans.push_front(i+1);
            if(pos<0) ans.push_back(i+1);
            arr[i]--;
            pos *= -1;
        }
        if(ans.size() % 2 == 0) {
            reverse(all(ans));
        }
        for(auto u : ans) {
            cout << u << " ";
        }
        cout << "\n";
    }


    return 0;
}