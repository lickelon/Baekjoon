#include <bits/stdc++.h>

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

    int N, L;

    cin >> N >> L;

    vector<int> arr(N);

    for (int i = 0; i < N; i++)

        cin >> arr[i];

    

    queue<int> alcohol;

    int sum = 0;

    int ans = 0;

    for(int i = 0; i < N; i++) {

        if(alcohol.size() >= L) {

            sum -= alcohol.front();

            alcohol.pop();

        }

        sum += arr[i];

        alcohol.push(arr[i]);

        if(sum >= 129 && sum <= 138) ans++;

    }

    cout << ans;

    return 0;

}