#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b;

    cin >> a >> b;

    if(a < 2)
    {
        cout << "Before";
    }
    else if(a > 2){
        cout << "After";
    }
    else
    {
        if(b < 18)
        {
            cout << "Before";
        }
        else if(b > 18)
        {
            cout << "After";
        }
        else
        {
            cout << "Special";
        }
    }
}