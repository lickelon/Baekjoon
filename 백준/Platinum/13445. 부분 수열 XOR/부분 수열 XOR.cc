#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MAX_LEN 20

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int k;

class Trie {
public:
    Trie* children[2];
    int cnt;

    Trie() {
        children[0] = children[1] = NULL;
        cnt = 0;
    }

    void insert(int key, int depth = MAX_LEN-1) {
        this->cnt += 1;
        if(depth == -1) return;
        int next = key >> depth & 1;
        if(children[next] == NULL) children[next] = new Trie();
        children[next]->insert(key, depth-1);
    }
    int find(int key, int depth = MAX_LEN-1) {
        if(depth == -1) return 0;
        int next = key >> depth & 1;
        int target = k >> depth & 1;
        int ret = 0;
        if(target == 1) {
            if(children[!next]) ret += children[!next]->find(key, depth-1);
            if(children[next]) ret += children[next]->cnt;
        }
        else {
            if(children[next]) ret += children[next]->find(key, depth-1);
        }
        return ret;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n >> k;

    Trie root;
    int curr = 0;
    root.insert(curr);

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        curr ^= input;
        ans += root.find(curr);
        root.insert(curr);
    }
    cout << ans;

    return 0;
}