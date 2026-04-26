#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#define INF 987654321

using namespace std;

int n;
string s1, s2;
int cache[1001][1001];
int f(int x, int y) {
    if (x == s1.size() || y == s2.size()) return 0;
    int& result = cache[x][y];
    if(result!=-1) return result;
    return result = max(f(x + 1, y), max(f(x, y + 1), f(x + 1, y + 1) + (s1[x] == s2[y])));
}

int main()
{
    cin >> s1 >> s2;
    memset(cache,-1,sizeof(cache));
    cout << f(0, 0);
    return 0;
}