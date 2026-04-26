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

int ans[100000];
int correct[100000];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }

    for(int i = 0; i < m; i++)
    {
        cin >> correct[i];
        correct[i] -= 1;
    }
    sort(correct, correct + m);

    int check[6] = {};
    check[ans[correct[0]]] = 1;
    int num = 1;
    for(int j = 0; j < correct[0]; j++)
    {
        num = num % 5 + 1;
        while(check[num] || num == ans[j]) num = num % 5 + 1;

        ans[j] = num;
    }
    for(int i = 1; i < m; i++)
    {
        fill(check, check + 6, 0);
        check[ans[correct[i-1]]] = 1;
        check[ans[correct[i]]] = 1;
        for(int j = correct[i-1] + 1; j < correct[i]; j++)
        {
            num = num % 5 + 1;
            while(check[num] || num == ans[j]) num = num % 5 + 1;

            ans[j] = num;
        }
    }

    fill(check, check + 6, 0);
    check[ans[correct[m-1]]] = 1;
    for(int j = correct[m-1] + 1; j < n; j++)
    {
        num = num % 5 + 1;
        while(check[num] || num == ans[j]) num = num % 5 + 1;

        ans[j] = num;
    }

    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}