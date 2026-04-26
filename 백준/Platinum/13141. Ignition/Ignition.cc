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

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n+1, vector<int>(n+1, 1e9));
    vector<pair<pii, int>> edge;
    for(int i = 0; i < m; i++) {
        int s, e, l;
        cin >> s >> e >> l;
        arr[s][e] = min(arr[s][e], l);
        arr[e][s] = min(arr[e][s], l);
        edge.push_back({{s,e},l});
    }
    for(int i = 1; i <= n; i++) {
        arr[i][i] = 0;
    }
    for(int mid = 1; mid <= n; mid++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                arr[i][j] = min(arr[i][j], arr[i][mid]+arr[mid][j]);
            }
        }
    }

    float ans = INF;
    for(int k = 1; k <= n; k++) {
        float M = 0;
        for(auto u : edge) {
            float ma, mb, lab;
            ma = arr[k][u.first.first];
            mb = arr[k][u.first.second];
            lab = u.second;
            if(abs(ma-mb) < lab) {
                M = max(M, min(ma,mb) + abs(ma-mb) + (lab-abs(ma-mb))/2);
            }
            else {
                M = max(M, min(ma, mb) + lab);
            }
        }
        ans = min(ans, M);
    }
    cout.precision(1);
    cout << fixed;
    cout << ans;
    //2. 정점 K에서 출발한다고 가정했을 때, A-B 간선이 전부 타기까지 걸리는 시간은 K~A 최소거리와 K~B 최소거리로 구할 수 있음
    //2-1. abs(mA-mB) < LAB : min(mA, mB) + abs(mA-mB) + (LAB-abs(mA-mB)) / 2
    //2-2. abs(mA-mB) >= LAB : min(mA, mB) + LAB
    //3. 모든 간선에 대해서 전부 타기까지 걸리는 시간의 최댓값을 구함
    //4. 모든 정점에 대해서 반복하여 최댓값의 최솟값을 구함
    //5. 따라서 O(N^3 + NM)

    return 0;
}