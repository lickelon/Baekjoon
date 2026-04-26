#include <bits/stdc++.h>

using namespace std;

int getpiMax(string S)
{
    int maxpi = 0;
    while(S.size())
    {
        int t = 0, L = S.size();
        vector<int> pi(L, 0);
        for (int i = 1; i < L; i++)
        {
            while (t > 0 && S[i] != S[t])
                t = pi[t - 1];
            if (S[i] == S[t])
            {
                pi[i] = ++t;
                maxpi = max(maxpi, pi[i]);
            }
        }
        S.erase(S.begin());
    }
    return maxpi;
}

int main()
{
    string S;
    cin >> S;
    printf("%d", getpiMax(S));
    return 0;
}