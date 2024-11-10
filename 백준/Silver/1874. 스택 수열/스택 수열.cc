#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int arr[100000];
stack<int> st;
vector<char> ans;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int idx = 0;

    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 1; i <= n; i++)
    {
        ans.push_back('+');
        st.push(i);
        while(!st.empty() && st.top() == arr[idx])
        {
            st.pop();
            idx++;
            ans.push_back('-');
        }
    }    

    if(!st.empty()) cout << "NO\n";
    else
    {
        for(auto u : ans)
            cout << u << "\n";
    }

    return 0;
}