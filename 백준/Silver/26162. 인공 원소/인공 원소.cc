#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[119];

void init() {
    arr[1] = 1;
    arr[0] = 1;
    for(int i = 2; i <= 118; i++) {
        if(arr[i] == 1) continue;
        for(int j = i + i; j <= 118; j += i) {
            arr[j] = 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    init();
    while(n--) {
        int input;
        cin >> input;
        int found = 0;
        for(int i = 0; i < input; i++) {
            if((arr[i] | arr[input-i]) == 0) found = 1; 
        }
        if(found) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}