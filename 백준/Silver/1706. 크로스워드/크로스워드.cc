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
    cin.tie(0); cout.tie(0);

    int r, c;
    cin >> r >> c;
    vector<string> board(r);
    for(int i = 0; i < r; i++) {
        cin >> board[i];
    }

    vector<string> words;
    for(int i = 0; i < r; i++) {
        string temp = "";
        for(int j = 0; j < c; j++) {
            if(board[i][j] == '#') {
                if(temp.length() > 1) {
                    words.emplace_back(temp);
                }
                temp = "";
            }
            else {
                temp += board[i][j];
            }
        }
        if(temp.length() > 1) {
            words.emplace_back(temp);
            temp = "";
        }
    }

    for(int j = 0; j < c; j++) {
        string temp = "";
        for(int i = 0; i < r; i++) {
            if(board[i][j] == '#') {
                if(temp.length() > 1) {
                    words.emplace_back(temp);
                }
                temp = "";
            }
            else {
                temp += board[i][j];
            }
        }
        if(temp.length() > 1) {
            words.emplace_back(temp);
            temp = "";
        }
    }

    sort(all(words));

    cout << words[0];

    return 0;
}