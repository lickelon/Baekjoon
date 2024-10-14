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
    bool end;

    Trie() : end(false) {}

    void insert(vector<int>& key) {
        this->_insert(key, 0);
    };
    bool find(vector<int>& key) {
        return this->_find(key, 0);
    };

private:
    void _insert(vector<int>& key, int index) {
        if(index == key.size()) {
            end = true;
            return;
        }
        int next = key[index];
        if(children.find(next) == children.end()) children[next] = new Trie;
        children[next]->_insert(key, index + 1);
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
    cout << fixed; cout.precision(2);

    int n;
    while(cin >> n) {
        vector<string> arr(n);
        for(auto &u : arr) cin >> u;

        Trie root;
        for(auto &u : arr) {
            vector<int> temp(all(u));
            root.insert(temp);
        }

        int sum = 0;
        for(auto &u : arr) {
            auto curr = &root;
            int cnt = 0;
            for(auto c : u) {
                curr = curr->children[c];
                if(curr->end || curr->children.size() > 1)
                    cnt++;
            }
            sum += cnt;
        }
        cout << (ld)sum / n << "\n";
    }

    return 0;
}