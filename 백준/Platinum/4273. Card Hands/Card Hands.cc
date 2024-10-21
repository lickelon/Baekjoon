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
    unordered_map<string, Trie*> children;
    bool end;

    Trie() : end(false) {}

    void insert(vector<string>& key) {
        this->_insert(key, 0);
    };
    bool find(vector<string>& key) {
        return this->_find(key, 0);
    };

private:
    void _insert(vector<string>& key, int index) {
        if(index == key.size()) {
            end = true;
            return;
        }
        string next = key[index];
        if(children.find(next) == children.end()) children[next] = new Trie;
        children[next]->_insert(key, index + 1);
    }
    bool _find(vector<string>& key, int depth) {
        if(depth == key.size()) return end;
        string next = key[depth];
        if(children.find(next) == children.end()) return false;
        return children[next]->_find(key, depth + 1);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        Trie root;
        for(int i = 0; i < n; i++) {
            int k;
            cin >> k;
            vector<string> arr(k);
            for(auto &u : arr) cin >> u;
            reverse(all(arr));
            root.insert(arr);
        }

        queue<Trie*> _q;
        _q.push(&root);
        int ans = 0;
        while(!_q.empty()) {
            auto curr = _q.front(); _q.pop();
            ans++;
            for(auto &u : curr->children) {
                _q.push(u.second);
            }
        }
        cout << ans-1 << "\n";
    }

    return 0;
}