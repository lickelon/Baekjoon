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
    
    string str;
    int arr[26] = {};
    bool flag = false;
    char mid = 0;
    deque<char> output;
    cin >> str;

    for(auto u : str)
        arr[u - 'A']++;
    
    for(int i = 0; i < 26; i++)
    {
        if(flag && arr[i] % 2)
        {
            cout << "I'm Sorry Hansoo";
            return 0;
        }
        if(arr[i] % 2)
        {
            flag = true;
            mid = i + 'A';
            arr[i] -= 1;
        }
    }
    
    if(mid) output.push_back(mid);
    for(int i = 25; i >= 0; i--)
    {
        for(int j = 0; j < arr[i]; j += 2)
        {
            output.push_front(i+'A');
            output.push_back(i+'A');
        }
    }

    for(auto u : output)
        cout << u;

    return 0;
}