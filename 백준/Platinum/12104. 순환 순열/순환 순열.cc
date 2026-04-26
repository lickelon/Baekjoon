#include <bits/stdc++.h>

using namespace std;

int KMP(string S, string P)
{
    int m = S.size(), n = P.size(), count = 0;
    vector<int> pi(m, 0);

    for(int i = 1, j = 0; i < m; i++)
    {
        while(j > 0 && P[i] != P[j])
            j = pi[j - 1];
        if(P[i] == P[j])
            pi[i] = ++j;
    }
    for(int i = 0, j = 0; i < m - 1; i++)
    {
        while(j > 0 && S[i] != P[j])
            j = pi[j - 1];
        if(S[i] == P[j])
        {
            if(j == n - 1)
            {
                j = pi[j];
                count++;
            }
            else j++;
        }
    }
    return count;
}

int main()
{
    string S, P;
    cin >> S;
    cin >> P;
    printf("%d", KMP(S + S, P));
    return 0;
}