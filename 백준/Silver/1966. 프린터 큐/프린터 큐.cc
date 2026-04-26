#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        queue<int> q;
        int arr[10] = {};

        int N, M;
        cin >> N >> M;

        for (int i = 0; i < N; i++)
        {
            int input;
            cin >> input;

            q.push(input);
            arr[input]++;
        }

        int curr = 9;
        int count = 0;
        while (!q.empty())
        {
            while (arr[curr] == 0)
                curr--;
            int num = q.front();
            q.pop();
            if (num == curr)
            {
                count++;
                if (M == 0)
                {
                    break;
                }
                else
                {
                    N--;
                    arr[curr]--;
                }
            }
            else
            {
                q.push(num);
            }
            M = (M + N - 1) % N;
        }
        cout << count << "\n";
    }

    return 0;
}