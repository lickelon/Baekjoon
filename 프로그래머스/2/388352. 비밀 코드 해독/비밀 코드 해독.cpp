#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> comb;
vector<int> arr;
int N;

void search(int depth, int k) {
    if (depth == 5) {
        comb.emplace_back(arr.begin(), arr.end());
        return;
    }
    if (k > N) return;

    arr.push_back(k);
    search(depth + 1, k + 1);
    arr.pop_back();

    search(depth, k + 1);
}

int solution(int n, vector<vector<int>> q, vector<int> ans) {
    int answer = 0;
    
    N = n;
    search(0, 1);
    
    for(auto v : comb) {
        int cnt1 = 0;
        for(int i = 0; i < q.size(); i++) {
            int cnt2 = 0;
            for(int x = 0; x < 5; x++) {
                for(int y = 0; y < 5; y++) {
                    if(v[x] == q[i][y]) cnt2++;
                }
            }
            if(cnt2 == ans[i]) cnt1++;
        }
        if(cnt1 == q.size()) answer++;
    }
    
    return answer;
}