#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sc = 0;
    while(++sc) {
        int n;
        string s;
        cin >> n;
        if(!n) break;
        getline(cin, s);
        vector<string> arr(n);
        for (int i = 0; i < n; i++) {
            getline(cin, arr[i]);
        }
        vector<int> chk(n);
        for(int i = 0; i < n * 2 - 1; i++) {
            int k;
            cin >> k >> s;
            chk[k-1]++;
        }
        for(int i = 0; i < n; i++) {
            if(chk[i] == 1) {
                cout << sc << " " << arr[i] << "\n";
                break;
            }
        }
    }

    return 0;
}