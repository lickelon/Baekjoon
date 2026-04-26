#include <cstdio>
#include <queue>

using std::queue;

queue<int> Q;

int count = 0;

void BFS()
{

	bool found = 0;
	while (!found)
	{
		if (Q.front() == 1)
		{
			found = 1;
		}
		if (Q.front() == 0)
		{
			count++;
			Q.pop();
			Q.push(0);
		}
		else
		{
			if (Q.front() % 3 == 0) Q.push(Q.front() / 3);
			if (Q.front() % 2 == 0) Q.push(Q.front() / 2);
			Q.push(Q.front() - 1);

			Q.pop();
		}
	}
}

int main()
{
	int input;

	scanf("%d", &input);
	Q.push(input);
	Q.push(0);
	BFS();
	printf("%d", count);
}