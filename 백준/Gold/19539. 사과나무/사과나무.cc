#include <iostream>
#include <algorithm>
#include <set>

int main()
{
	std::multiset<int> _ms;
	int N, input, sum = 0;
	bool f = 1;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input);
		sum += input;
		_ms.insert(input);
	}
	if (sum % 3) f = 0;
	else
	{
		while (!_ms.empty())
		{
			std::multiset<int>::iterator m_it = _ms.begin();
			int m = *m_it; 

			std::multiset<int>::iterator M_it = _ms.end();
			M_it--;
			int M = *M_it; 


			if (m < 0)
			{
				f = 0;
				break;
			}
			int R = m % 3;
			if (!R)
			{
				_ms.erase(m_it);
			}
			else
			{
				if (_ms.size() == 1)
				{
					f = 0;
					break;
				}
				m -= R;
				M -= 3 - R;
				_ms.erase(M_it);
				_ms.insert(M);
				_ms.erase(m_it);
				_ms.insert(m);
			}
		}
	}
	if (f) printf("YES");
	else printf("NO");
	return 0;
}