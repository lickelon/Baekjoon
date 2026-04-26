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
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        string input;
        cin >> input;
        int value = 0;
        switch(input[0]) {
        case 'B':
            value = 0;
            break;
        case 'S':
            value = 1000;
            break;
        case 'G':
            value = 2000;
            break;
        case 'P':
            value = 3000;
            break;
        case 'D':
            value = 4000;
            break;
        }
        stringstream ss(input.substr(1));
        int temp;
        ss >> temp;
        value += 1000-temp;
        arr[i] = value;
    }
    vector<int> arr2(arr);
    sort(all(arr2));

    vector<int> detected;
    for(int i = 0; i < n; i++) {
        if(arr[i] != arr2[i]) detected.push_back(arr2[i]);
    }

    if(detected.size() == 0) {
        cout << "OK";
    }
    else {
        cout << "KO\n";
        for(auto u : detected) {
            int temp = u/1000;
            switch (temp)
            {
            case 0:
                cout << "B";
                break;
            case 1:
                cout << "S";
                break;
            case 2:
                cout << "G";
                break;
            case 3:
                cout << "P";
                break;
            case 4:
                cout << "D";
                break;
            }
            cout << 1000 - u % 1000;
            cout << " ";
        }
    }

    return 0;
}