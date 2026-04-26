#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;

    while (T--)
    {
        int S, N;
        cin >> S >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            arr[i]--;
        }

        vector<int> last(S, -1);
        vector<pair<int, int>> x;

        for (int i = 0; i < N; i++)
        {
            if (last[arr[i]] != -1 && i - last[arr[i]] < S)
            {
                int fr = last[arr[i]] % S;
                int to = i % S;

                if (fr < to)
                {
                    x.push_back({0, fr});
                    x.push_back({to, S});
                }
                if (fr > to)
                    x.push_back({to, fr});
            }

            last[arr[i]] = i;
        }

        sort(x.begin(), x.end());

        int res = S;

        for (int i = 0; i < x.size();)
        {
            int fr = x[i].first;
            int to = x[i].second;
            i++;

            while (i < x.size() && x[i].first >= fr && x[i].first < to)
                to = max(to, x[i++].second);

            res -= to - fr;
        }

        cout << res << "\n";
    }
    return 0;

}