#include <cstdio>
#include <vector>

using std::vector;

vector<int> permutation;
int N, M;
unsigned char bitset = 0;

void solve()
{
	if (permutation.size() == M)
	{
		for (int i = 0; i < M; i++)
		{
			printf("%d ", permutation[i]);
		}
		printf("\n");
	}
	else
	{
		for (int i = 0; i < N; i++)
		{

			if (bitset & (1 << i)) continue;
			bitset ^= 1 << i;
			permutation.push_back(i + 1);
			solve();
			bitset ^= 1 << i;
			permutation.pop_back();
		}
	}
}
int main()
{
	scanf("%d %d", &N, &M);
	solve();
}