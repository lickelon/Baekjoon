#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for(int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k = 1;

    string end = "Was it a cat I saw?";
    string input;
    while(true){
        getline(cin, input);
        if(end == input) break;
        int size = input.size();
        for(int i = 0; i < size; i += k + 1){
            cout << input[i];
        }
        cout << "\n";
        k++;
    }

    return 0;
}