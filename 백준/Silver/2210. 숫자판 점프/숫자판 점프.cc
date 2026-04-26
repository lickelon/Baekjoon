#include <cstdio>
#include <set>
#include <vector>

std::set<int> numset;
std::vector<int> v;
int arr[5][5];

void solve(int i, int j)
{
	v.push_back(arr[i][j]);
	if (v.size() == 6)
	{
		int temp = 0;
		for (int i = 0; i < 6; i++)
		{
			temp *= 10;
			temp += v[i];
		}
		numset.insert(temp);
	}
	else
	{
		if (i > 0) solve(i - 1, j);
		if (i < 4) solve(i + 1, j);
		if (j > 0) solve(i, j - 1);
		if (j < 4) solve(i, j + 1);
	}
	v.pop_back();
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			solve(i, j);
		}
	}
	printf("%d", numset.size());
}