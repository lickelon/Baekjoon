#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    string s1, s2;
    cin >> s1 >> s2;

    int arr[5] = {};
    int vowel[5] = {'a', 'e', 'i', 'o', 'u'};

    int ans = 1;

    if(s1[0] != s2[0] || s1[n-1] != s2[n-1]) ans = 0;

    for(int i = 0; i < 5; i++)
    {
        string temp = s1;
        temp.erase(remove(temp.begin(), temp.end(), vowel[i]), temp.end());
        arr[i] += s1.length() - temp.length();
        s1 = temp;

        temp = s2;
        temp.erase(remove(temp.begin(), temp.end(), vowel[i]), temp.end());
        arr[i] -= s2.length() - temp.length();
        s2 = temp;

        if(arr[i] != 0) ans = 0;
    }

    if(s1 == s2 && ans) cout << "YES";
    else cout << "NO";

    return 0;
}