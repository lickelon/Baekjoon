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

    string a, b, r;
    cin >> a >> b >> r;
    int ans[42] = {};
    for(int i = a.length()-1; i >= 0; i--) {
        for(int j = b.length()-1; j >= 0; j--) {
            int temp = (a[i]-'0') * (b[j]-'0');
            int t1 = temp%10;
            int t2 = temp/10;
            ans[a.length()-i-1+b.length()-j-1] += t1;
            ans[a.length()-i-1+b.length()-j-1+1] += t2;
        }
    }
    for(int i = 0; i < 42; i++) {
        if(ans[i] >= 10) {
            ans[i+1] += ans[i]/10;
            ans[i] %= 10;
        }
    }
    string anss = "";
    for(int i = 0; i < 42; i++) {
        anss.push_back(ans[i]+'0');
    }
    while(anss.length() && anss[anss.length()-1] == '0') {
        anss.pop_back();
    }
    if(anss.length() == 0) anss.push_back('0');
    reverse(all(anss));

    if(anss.length() > r.length()) {
        cout << "overflow";
    }
    else if(anss.length() < r.length()) {
        cout << anss;
    }
    else {
        for(int i = 0; i < anss.length(); i++) {
            if(anss[i] == r[i]) continue;
            else if(anss[i] < r[i]) {
                cout << anss;
                return 0;
            }
            else {
                cout << "overflow";
                return 0;
            }
        }
        cout << anss;
    }

    return 0;
}