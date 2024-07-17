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
    vector<bool> place(n); // LR
    vector<int> L, R;
    for(int i = 0; i < n; i++) {
        int a;
        string s;
        cin >> a >> s;
        if(s == "R") {
            R.emplace_back(a);
            place[i] = 1;
        }
        else {
            L.emplace_back(a);
            place[i] = 0;
        }
    }
    sort(all(R));
    sort(all(L));

    int M;
    bool Md;
    if(R.size() == 0) {
        M = L.back();
        Md = 0;
        L.pop_back();
    } 
    else if(L.size() == 0) {
        M = R.back();
        Md = 1;
        R.pop_back();
    }
    else {
        if(R.back() < L.back()) {
            M = L.back();
            Md = 0;
            L.pop_back();
        }
        else {
            M = R.back();
            Md = 1;
            R.pop_back();
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(place[i] != Md) continue;
        vector<int> temp(n);
        temp[i] = M;

        int ridx = 0;
        for(int j = 0; j < i; j++) {
            if(place[j] == 1) {
                temp[j] = R[ridx];
                ridx++;
            }
        }
        int lidx = 0;
        for(int j = n-1; j > i; j--) {
            if(place[j] == 0) {
                temp[j] = L[lidx];
                lidx++;
            }
        }

        int cnt = 1;
        int LM = 0;
        for(int j = 0; j < i; j++) {
            if(place[j] == 0) {
                while(lidx < L.size() && L[lidx] <= LM) {
                    lidx++;
                }
                if(lidx < L.size()) {
                    cnt++;
                    temp[j] = L[lidx];
                }
            }
            LM = max(LM, temp[j]);
        }
        int RM = 0;
        for(int j = n-1; j > i; j--) {
            if(place[j] == 1) {
                while(ridx < R.size() && R[ridx] <= RM) {
                    ridx++;
                }
                if(ridx < R.size()) {
                    cnt++;
                    temp[j] = R[ridx];
                }
            }
            RM = max(RM, temp[j]);
        }
        ans = max(ans, cnt);
    }
    cout << ans;

    return 0;
}