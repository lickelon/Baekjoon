#include <iostream>
#include <algorithm>
#include <string>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int ans = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        if (str.find("anj") == 0 && str.length() == 3)
            ans = 1;
    }
    if(ans) cout << "뭐야;\n";
    else cout << "뭐야?\n";
    return 0;
}