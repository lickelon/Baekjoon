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
    int m_idx;

    Trie() {
        children[0] = children[1] = NULL;
        m_idx = INF;
    }

    void insert(int num, int idx) {
        this->_insert(num, 0, idx);
    }
    int find(int num, int idx) {
        return this->_find(num, 0, 0, idx);
    }

private:
    void _insert(int key, int depth, int idx) {
        this->m_idx = min(this->m_idx, idx);
        if(depth == MAX_LEN) return;
        int next = (key >> (MAX_LEN - 1 - depth) & 1);
        if(children[next] == NULL) children[next] = new Trie();
        children[next]->_insert(key, depth+1, idx);
    }
    int _find(int key, int depth, int num, int idx) {
        if(depth == MAX_LEN) return num;

        int next = (key >> (MAX_LEN - 1 - depth) & 1);
        
        int imp = 0;
        if(children[0] == NULL || children[0]->m_idx > idx) imp |= 1;
        if(children[1] == NULL || children[1]->m_idx > idx) imp |= 2;

        if(imp == 3) return -1;
        else if(imp == 0) return children[!next]->_find(key, depth + 1, num*2 + 1, idx);
        else return children[!(imp/2)]->_find(key, depth+1, num*2 + (!(imp/2) != next), idx);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, x;
    cin >> n >> x;

    Trie root;
    int curr = 0;
    root.insert(curr, 0);
    int ai = INF, ak = 0;
    for(int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        curr ^= input;
        root.insert(curr, i);
        int l = 0, r = i - 1;
        if(root.find(curr, i-1) < x) continue;
        while(l < r) {
            int m = (l+r)/2;
            if(root.find(curr, m) >= x) r = m;
            else l = m+1;
        }
        if(ak < i - r) {
            ak = i - r;
            ai = r + 1;
        }
        else if(ak == i - r) {
            if(ai > r) {
                ak = i - r;
                ai = r + 1;
            }
        }
    }
    cout << ai << " " << ak;

    return 0;
}