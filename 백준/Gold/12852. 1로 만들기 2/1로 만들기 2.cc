#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int arr[1000001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    fill(arr, arr + 1000001, INF);

    int n;
    cin >> n;
    arr[n] = 0;

    for(int i = n; i > 1; i--)
    {
        if(i % 2 == 0) arr[i/2] = min(arr[i/2], arr[i] + 1);
        if(i % 3 == 0) arr[i/3] = min(arr[i/3], arr[i] + 1);
        arr[i-1] = min(arr[i-1], arr[i] + 1);
    }

    cout << arr[1] << "\n";

    stack<int> _st;
    _st.push(1);
    while(_st.top() != n)
    {
        int temp = _st.top();
        if(temp*2 <= 1000000 && arr[temp] - 1 == arr[temp*2]) _st.push(temp*2);
        else if(temp*3 <= 1000000 && arr[temp] - 1 == arr[temp*3]) _st.push(temp*3);
        else if(temp+1 <= 1000000 && arr[temp] - 1 == arr[temp+1]) _st.push(temp+1);
    }

    while(!_st.empty())
    {
        cout << _st.top() << " ";
        _st.pop();
    }

    return 0;
}