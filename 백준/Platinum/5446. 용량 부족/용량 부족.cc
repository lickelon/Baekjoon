#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

class Trie {
public:
    unordered_map<int, Trie*> children;
    bool flag;
    bool end;

    Trie() : end(false), flag(false) {}

    void insert(vector<int>& key, bool flag) {
        this->_insert(key, 0, flag);
    };
    bool find(vector<int>& key) {
        return this->_find(key, 0);
    };

private:
    void _insert(vector<int>& key, int index, bool flag) {
        this->flag |= flag;
        if(index == key.size()) {
            if(!flag) end = true;
            return;
        }
        int next = key[index];
        if(children.find(next) == children.end()) children[next] = new Trie;
        children[next]->_insert(key, index + 1, flag);
    }
    bool _find(vector<int>& key, int depth) {
        if(depth == key.size()) return end;
        int next = key[depth];
        if(children.find(next) == children.end()) return false;
        return children[next]->_find(key, depth + 1);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        Trie root;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            vector<int> arr(all(s));
            root.insert(arr, 0);
        }
        int m;
        cin >> m;
        for(int i = 0; i < m; i++) {
            string s;
            cin >> s;
            vector<int> arr(all(s));
            root.insert(arr, 1);
        }

        int ans = 0;
        queue<Trie*> _q;
        _q.push(&root);
        while(!_q.empty()) {
            auto curr = _q.front(); _q.pop();
            if(curr->end || !curr->flag) ans++;
            if(curr->flag) {
                for(auto u : curr->children) {
                    _q.push(u.second);
                }
            }
        }
        cout << ans << "\n";
    }

    return 0;
}