#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1.length() >= s2.length()) cout << "go\n";
	else cout << "no\n";
}