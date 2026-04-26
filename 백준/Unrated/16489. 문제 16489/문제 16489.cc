#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>
int main()
{
	long double a[3];
	int input;
	long double S, R, r, d, k, s;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &input);
		a[i] = input;
	}
	std::cout.precision(14);
	s = a[0] + a[1] + a[2];
	s /= 2;
	S = sqrtl(s * (s - a[0]) * (s - a[1]) * (s - a[2]));

	R = ( a[0] * a[1] * a[2] ) / (S * 4);
	r = S / s;

	d = sqrtl(std::max((long double)0,R * R - 2 * R * r));
	if (a[0] == a[1] && a[1] == a[2]) d = 0;
	k = sqrtl(R * R - (a[0] * a[0]) / 4.0) + sqrtl(R * R - (a[1] * a[1]) / 4.0) + sqrtl(R * R - (a[2] * a[2]) / 4.0);

	std::cout << S << "\n" << R << "\n" << r << "\n" << d << "\n" << k << "\n";
}