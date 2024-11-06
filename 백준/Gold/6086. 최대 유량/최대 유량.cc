#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
 
const int INF = 100000;
const int V_MAX = 55;
int N, R[V_MAX][V_MAX], L[V_MAX], nxt[V_MAX];
bool chk[V_MAX][V_MAX];
vector<int> E[V_MAX];
 
bool BFS(int s, int e)
{
    fill(L,L+V_MAX,-1);
    queue<int> Q;
    L[s] = 0;
    Q.push(s);
    while (!Q.empty()) {
        int u = Q.front(); Q.pop();
        for (int v : E[u]) {
            // 레벨이 이미 갱신 되었거나, 용량이 꽉찼으면 볼 필요 없음
            if (L[v] != -1 || R[u][v] <= 0) continue;
            L[v] = L[u] + 1;
            Q.push(v);
        }
    }
    // 끝까지 레벨 그래프가 형성되면 true 반환
    return L[e] != -1;
}
 
int DFS(int u, int e, int f)
{
    if (u == e) return f;
    for (int &i = nxt[u]; i < E[u].size(); i++) {
        int v = E[u][i];
        if (L[v] <= L[u] || R[u][v] <= 0) continue;
        int t = DFS(v,e,min(f,R[u][v]));
        if (t > 0) {
            R[u][v] -= t;
            R[v][u] += t;
            return t;
        }
    }
    return 0;
}
 
int Dinic(int s, int e)
{
    int ans = 0;
    // 종료점까지 레벨 그래프가 형성된다면 유량 추가
    while (BFS(s,e)) {
        int flow = 0;
        fill(nxt,nxt+V_MAX,0);
        while ((flow = DFS(s,e,INF))>0) ans += flow;
    }
    return ans;
}
 
void init(int a, int b, int c)
{
    R[a][b] += c;
    R[b][a] += c;
    if (chk[a][b]) return;
    E[a].push_back(b);
    E[b].push_back(a);
    chk[a][b] = 1;
}
 
int main()
{
    char a, b;
    int c;
    scanf("%d",&N);
    for (int n = 0; n < N; n++) {
        scanf("\n%c %c %d",&a,&b,&c);
        if (a >= 'a') a = a-'a'+26;
        else a = a-'A';
        if (b >= 'a') b = b-'a'+26;
        else b = b-'A';
 
        init(a,b,c);
    }
    printf("%d\n",Dinic(0,25));
    return 0;
}