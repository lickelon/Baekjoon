#define _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING

#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
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
        if (index == key.size()) {
            end = true;
            return;
        }
        int next = key[index];
        if (children.find(next) == children.end()) children[next] = new Trie;
        children[next]->_insert(key, index + 1);
    }
    bool _find(vector<int>& key, int depth) {
        if (depth == key.size()) return end;
        int next = key[depth];
        if (children.find(next) == children.end()) return false;
        return children[next]->_find(key, depth + 1);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int c, n;
    Trie root;
    unordered_set<string> s;
    cin >> c >> n;
    for (int i = 0; i < c; i++) {
        string input;
        cin >> input;
        vector<int> temp(all(input));
        root.insert(temp);
    }
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        s.insert(input);
    }

    int q;
    cin >> q;
    while(q--) {
        string input;
        cin >> input;
        bool ans = false;
        Trie* curr = &root;
        for (int i = 0; i < input.length(); i++) {
            if (curr->end) {
                if (s.find(input.substr(i)) != s.end()) {
                    ans = true;
                    break;
                }
            }
            if (curr->children.find(input[i]) != curr->children.end()) {
                curr = curr->children[input[i]];
            }
            else {
                break;
            }
        }
        cout << (ans ? "Yes" : "No") << "\n";
    }

    return 0;
}