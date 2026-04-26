#include <bits/stdc++.h>

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

    while(true) {
        int N;
        cin >> N;
        if(N == 0) break;
        vector<string> name(N);
        vector<pair<float, int>> arr(N);

        for(int i = 0; i < N; i++) {
            cin >> name[i] >> arr[i].first;
            arr[i].second = i;
        }
        sort(arr.begin(), arr.end());
        int idx = N-2;
        for(; idx >= 0; idx--) {
            if(arr[idx].first != arr[idx+1].first) {
                break;
            }
        }
        idx += 1;
        while(idx < N && arr[idx].first == arr[idx+1].first) {
            cout << name[arr[idx].second] << " ";
            idx++;
        }
        cout << name[arr[idx].second] << "\n";
    }

    return 0;
}