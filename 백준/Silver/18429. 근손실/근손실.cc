#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int k, N, set[8], count = 0;
unsigned char bitset = 0;

void solve(int progress, int weight)
{
	
	if (progress == N) count++;
	else if(weight >= 0)
	{
		for (int i = 0; i < N; i++)
		{
			if (bitset & (1 << i)) continue;
			else
			{
				bitset ^= 1 << i;
				solve(progress + 1, weight + set[i] - k);
				bitset ^= 1 << i;
			}
		}
	}
}


int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> k;

	for (int i = 0; i < N; i++)
	{
		cin >> set[i];
	}
	solve(0, 0);

	cout << count << endl;
}