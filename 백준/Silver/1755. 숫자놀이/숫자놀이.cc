#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

string en[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

bool comp(const int& a, const int& b) {
    string as = "", bs = "";
    
    if((a/10) != 0) as += en[(a/10)];
    as += en[(a%10)];

    if((b/10) != 0) bs += en[(b/10)];
    bs += en[(b%10)];

    return as < bs;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int m, n;
    cin >> m >> n;
    vector<int> arr(n-m+1);
    
    for(int i = m; i <= n; i++) {
        arr[i-m] = i;
    }

    sort(arr.begin(), arr.end(), comp);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
        if(i % 10 == 9)
            cout << "\n";
    }
    

    return 0;
}