#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    //vector<int> arr(N);
    
    for(int i = 0; i < N; i++) {
        string input;
        cin >> input;
        if(input[0] == '1') {
            cout << ".";
        }
        else {
            cout << "-";
        }
    }
    
}