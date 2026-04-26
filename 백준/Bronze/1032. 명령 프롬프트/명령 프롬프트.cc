#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char base[52];
    char input[52];

    int n, len;

    cin >> n;

    cin >> base;

    len = strlen(base);

    for(int i = 1; i < n; i++) {
        cin >> input;

        for(int j = 0; j < len; j++) {
            if(base[j] != input[j]) base[j] = '?';
        }
    }

    cout << base;

    return 0;
}