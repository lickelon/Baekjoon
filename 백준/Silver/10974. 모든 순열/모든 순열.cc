#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

vector<int> permutation;
int N;
unsigned char bitset = 0;

void solve()
{
	if (permutation.size() == N)
	{
		for (int i = 0; i < N; i++)
		{
			cout << permutation[i] << " ";
		}
		cout << "\n";
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
	std::ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;

	solve();
}