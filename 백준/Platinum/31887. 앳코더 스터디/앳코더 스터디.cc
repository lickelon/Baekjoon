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
    int m;
    cin >> m;
    vector<int> arr(n);
    unordered_set<int> gss;
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        if(input < n) {
            arr[input] += 1;
            gss.insert(input);
        }
        else {
            arr[input-n] += 2;
            gss.insert(input-n);
        }
    }
    vector<int> ans1(n+1);
    int track = 1;
    int cnt = 0;
    int far = 0;
    for(int i = 1; i < n; i++) {
        if(arr[i] != 0) far = i;
        if(arr[i] == 1) {
            if(track == 1) {
                cnt += 1;
                track = 0;
            }
            else if(track == 0) {
                track = 2;
            }
        }
        if(arr[i] == 2) {
            if(track == 2) {
                cnt += 1;
                track = 0;
            }
            else if(track == 0) {
                track = 1;
            }
        }
        if(arr[i] == 3) {
            cnt += 1;
            track = 0;
        }
        ans1[i] = cnt + far;
    }
    //역방향
    vector<int> ans2(n+1);
    track = 2;
    cnt = 0;
    far = 0;
    for(int i = n-1; i >= 1; i--) {
        if(arr[i] != 0) far = (n - i);
        if(arr[i] == 1) {
            if(track == 1) {
                cnt += 1;
                track = 0;
            }
            else if(track == 0) {
                track = 2;
            }
        }
        if(arr[i] == 2) {
            if(track == 2) {
                cnt += 1;
                track = 0;
            }
            else if(track == 0) {
                track = 1;
            }
        }
        if(arr[i] == 3) {
            cnt += 1;
            track = 0;
        }
        ans2[i] = cnt + far;
    }

    int ans = INF;
    gss.insert(0);
    gss.insert(n);
    vector<int> gsv(all(gss));
    sort(all(gsv));
    for(int i = 0; i < gsv.size() - 1; i++) {
        ans = min(ans, ans1[gsv[i]] + ans2[gsv[i+1]]);
    }
    cout << ans;
    return 0;
}