#include <bits/stdc++.h>

using namespace std;

int N, A[1000001], L[1000001], P[1000001], len;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        int *pos = lower_bound(L, L + len, A[i]);
        *pos = A[i];
        P[i] = pos - L;
        if(pos == L + len) ++len;
    }
    cout << len << "\n";
    
    stack<int> s;
    for(int i = N - 1; i >= 0; i--)
    {
        if(P[i] == len - 1)
        {
            s.push(A[i]);
            --len;
            if(!len) break;
        }
    }
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}