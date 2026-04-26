#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1000];
    int N, ans = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    sort(a, a + N);

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int diff = a[j] - a[i];
            ans += upper_bound(a, a + N, a[j] + diff * 2) - lower_bound(a, a + N, a[j] + diff);
        }
    }
    printf("%d", ans);
    return 0;
}