#include <iostream>
#include <vector>
#include <queue>

#define ll long long
const ll INF = 0x7FFFFFFFFFFFFFFF;

std::vector <std::pair<int, int>> adj[100001];
std::priority_queue<std::pair<ll, int>> q;
ll distance[100001];
bool processed[100001];

int main() {
    int N, M;        // 정점, 간선
    int a, b, t;    // 시작, 도착, 가중치

    //
    // 데이터 입력.
    //
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++) {
        int temp;
        scanf("%d", &temp);
        processed[i] = temp;    // 와드가 있는곳은 처리할 필요가 없음.
        distance[i] = INF;
    }
    //
    // 입력데이터 처리
    for (int i = 0; i < M; i++) {
        scanf("%d %d %d", &a, &b, &t);
        adj[a].push_back({ b, t });
        adj[b].push_back({ a, t });
    }

    distance[0] = 0;    // 시작노드
    q.push({ 0, 0 });

    // 다익스트라 알고리즘
    while (!q.empty()) {
        int start = q.top().second; q.pop();
        if (processed[start]) continue;
        processed[start] = true;
        for (auto i : adj[start]) {
            int end = i.first, w = i.second;
            if (distance[start] + w < distance[end]) {
                distance[end] = distance[start] + w;
                q.push({ -distance[end], end });
            }
        }
    }

    if (distance[N - 1] == INF) {
        printf("-1\n");
    }
    else {
        printf("%lld\n", distance[N - 1]);
    }
}