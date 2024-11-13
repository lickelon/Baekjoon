#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MAX_LEN 31

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

class Trie {
public:
    Trie* children[2];
    int cnt;

    Trie() {
        children[0] = children[1] = NULL;
        cnt = 0;
    }

    void insert(int key, int q, int depth = MAX_LEN-1) {
        this->cnt += q;
        if(depth == -1) return;
        int next = key >> depth & 1;
        if(children[next] == NULL) children[next] = new Trie();
        children[next]->insert(key, q, depth-1);
    }
    int find(int key, int depth = MAX_LEN-1) {
        if(depth == -1) return 0;
        int next = key >> depth & 1;
        int ret = 0;
        if(children[!next] == NULL || children[!next]->cnt == 0) ret = next;
        else {
            ret = !next;
            next = !next;
        }
        return (ret << depth) + children[next]->find(key, depth-1);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int m;
    cin >> m;
    Trie root;
    root.insert(0, 1);
    while(m--) {
        int a, b;
        cin >> a >> b;
        if(a == 1) root.insert(b, 1);
        if(a == 2) root.insert(b, -1);
        if(a == 3) cout << (root.find(b) ^ b) << "\n"; 
    }

    return 0;
}