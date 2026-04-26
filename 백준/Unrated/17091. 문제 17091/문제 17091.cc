#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

string numToStr(int num) {
    switch(num) {
        case 0:
        return "o' clock";
        case 1:
        return "one";
        case 2:
        return "two";
        case 3:
        return "three";
        case 4:
        return "four";
        case 5:
        return "five";
        case 6:
        return "six";
        case 7:
        return "seven";
        case 8:
        return "eight";
        case 9:
        return "nine";
        case 10:
        return "ten";
        case 11:
        return "eleven";
        case 12:
        return "twelve";
        case 13:
        return "thirteen";
        case 14:
        return "fourteen";
        case 15:
        return "quarter";
        case 16:
        return "sixteen";
        case 17:
        return "seventeen";
        case 18:
        return "eighteen";
        case 19:
        return "nineteen";
        case 20:
        return "twenty";
        case 21:
        return "twenty one";
        case 22:
        return "twenty two";
        case 23:
        return "twenty three";
        case 24:
        return "twenty four";
        case 25:
        return "twenty five";
        case 26:
        return "twenty six";
        case 27:
        return "twenty seven";
        case 28:
        return "twenty eight";
        case 29:
        return "twenty nine";
        case 30:
        return "half";
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int h, m;
    cin >> h >> m;
    if(m == 0) {
        cout << numToStr(h) << " " << numToStr(m);
    }
    else if(m == 1) {
        cout << numToStr(m) << " minute past " << numToStr(h);
    }
    else if(m == 15) {
        cout << numToStr(m) << " past " << numToStr(h);
    }
    else if(2 <= m && m < 30) {
        cout << numToStr(m) << " minutes past " << numToStr(h);
    }
    else if(m==30) {
        cout << numToStr(m) << " past " << numToStr(h);
    }
    else if(m == 45) {
        cout << numToStr(60 - m) << " to " << numToStr(h%12 + 1);
    }
    else if(31 <= m && m <= 58) {
        cout << numToStr(60 - m) << " minutes to " << numToStr(h%12 + 1);
    }
    else {
        cout << numToStr(60 - m) << " minute to " << numToStr(h%12+1);
    }
    
    return 0;
}