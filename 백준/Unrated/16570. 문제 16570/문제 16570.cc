#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void getPi(vector<int> P)
{
	int Max = 0, count = 0;
	int L = (int)P.size();
	vector<int> Pi(L, 0);
	int j = 0;
	for (int i = 1; i < L; ++i)
	{
		while (j > 0 && P[i] != P[j])
		{
			j = Pi[j - 1];
		}
		if (P[i] == P[j])
		{
			Pi[i] = ++j;
			if (Pi[i] == Max)
				count++;
			if (Pi[i] > Max)
			{
				Max = Pi[i];
				count = 1;
			}

		}
	}
	if (Max == 0) printf("-1");
	else printf("%d %d", Max, count);
}

int main()
{
	int N, input;
	vector<int> S;

	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input);
		S.push_back(input);
	}
	reverse(S.begin(), S.end());
	getPi(S);
}