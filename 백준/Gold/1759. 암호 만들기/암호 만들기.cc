// Example program
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char ans[15];
char _data[15];
int check[15];
int L, C;
char vow[5] = {'a','e','i','o','u'};
void solve(int d, int c)
{
    if(d == L) {
        int cnt = 0;
        for(int i = 0; i < L; i++)
        {
            for(int j = 0; j < 5; j++) {
                if(ans[i] == vow[j]) cnt++;
            }
        }
        if(cnt == 0 || cnt >= L - 1) return;
        cout << ans << "\n";
        return;
    }
    for(int i = c; i < C; i++) {
        if(check[i]) continue;
        check[i] = 1;
        ans[d] = _data[i];
        solve(d+1, i);
        check[i] = 0;
    }
}

int main()
{
  cin >> L >> C;
  
  for(int i = 0; i < C; i++)
  {
      cin >> _data[i];
  }
  sort(_data, _data + C);
  
  solve(0, 0);
}