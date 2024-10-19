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
    int end;
    int cnt;

    Trie() : end(0), cnt(0) {}

    void insert(vector<int>& key) {
        this->_insert(key, 0);
    };
    int find(vector<int>& key) {
        return this->_find(key, 0);
    };

private:
    void _insert(vector<int>& key, int index) {
        this->cnt += 1;
        if(index == key.size()) {
            end += 1;
            return;
        }
        int next = key[index];
        if(children.find(next) == children.end()) children[next] = new Trie;
        children[next]->_insert(key, index + 1);
    }
    int _find(vector<int>& key, int depth) {
        if(depth == key.size()) return this->cnt;
        int next = key[depth];
        if(children.find(next) == children.end()) return this->end;
        return this->end + children[next]->_find(key, depth + 1);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    Trie root;

    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<int> arr(k);
        for(auto &u : arr) cin >> u;
        root.insert(arr);
    }

    for(int i = 0; i < m; i++) {
        int k;
        cin >> k;
        vector<int> arr(k);
        for(auto &u : arr) cin >> u;
        cout << root.find(arr) << "\n";
    }

    return 0;
}