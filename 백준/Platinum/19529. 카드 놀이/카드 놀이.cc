#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

using ll = long long;

int main()
{
	ll T;
	cin >> T;

	while (T--)
	{
		ll n, x;
		bool odd = false;
		bool neg = false;
		bool half = false;
		cin >> n >> x;

		if (n % 2 == 1)
		{
			x -= 1;
			n -= 1;
			odd = true;
		}
		else if (x <= 0)
		{
			x -= 1;
			n -= 2;
			neg = true;
		}
		else if (x < n / 2)
		{
			x -= 1;
			n -= 2;
			half = true;
		}
		queue<ll> _q;

		ll check = 0;
		ll save = 0;

		while (n != 0)
		{
			if (x >= 0)
			{
				if (n - 1 < x)
				{
					if (odd == false && check == 0)
					{
						save = n;
					}
					else
					{
						_q.push(n + check);
						_q.push(1 + check);
					}
					x -= n - 1;
					n -= 2;
					check++;
				}
				else
				{
					_q.push(n + check);
					_q.push(n - 1 + check);
					n -= 2;
					x -= 1;
				}
			}
			else if (x < 0)
			{
				if (1 - n > x)
				{
					_q.push(1 + check);
					_q.push(n + check);
					x -= 1 - n;
					n -= 2;
					check++;
				}
				else
				{
					_q.push(n - 1 + check);
					_q.push(n + check);
					n -= 2;
					x -= -1;
				}
			}
		}
		if (x != 0)
		{
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		while (!_q.empty())
		{
			cout << _q.front() + odd + neg*2 + half*2 << " ";
			_q.pop();
		}
		if (odd) cout << "1";
		if (save) cout << save << " " << "1";
		if (neg) cout << "2 1";
		if (half) cout << "2 1";
		cout << "\n";
	}
}