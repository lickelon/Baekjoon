#include <iostream>
#include <vector>

using namespace std;

bool check[2001];
int ans = 0;
vector <int> arr[2001];
int first;

void dfs(int start, int Friend) {

	if (Friend == 5) {
		ans = 1;
		return;
	}
	check[start] = true;
	for (int i = 0; i < arr[start].size(); i++) {
		int next = arr[start][i];
		if (!check[next]) {
			dfs(next, Friend + 1);
			if (ans) return;
		}
	}
	check[start] = false;
}

int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int u, v;
		cin >> u >> v;
		arr[u].push_back(v);
		arr[v].push_back(u);
	}

	for (int i = 0; i < N; i++) {
		if (!check[i]) {
			first = i;
			dfs(i, 1);
			//memset(check, 0, sizeof(check));
		}
	}
	cout << ans;
}