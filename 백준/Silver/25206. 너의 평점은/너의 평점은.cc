#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(10);

    string input;
    ld creditSum = 0;
    ld gradeSum = 0;
    while(getline(cin, input)) {
        istringstream iss(input);
        string name, grade;
        ld credit;
        iss >> name >> credit >> grade;
        ld score = 0;
        if(grade[0] == 'P') {
            continue;
        }
        if(grade[0] == 'F') {
            creditSum += credit;
            continue;
        }
        score = 4 - (grade[0] - 'A');
        if(grade[1] == '+') score += 0.5;
        gradeSum += score * credit;
        creditSum += credit;
    }
    cout << gradeSum / creditSum;

    return 0;
}