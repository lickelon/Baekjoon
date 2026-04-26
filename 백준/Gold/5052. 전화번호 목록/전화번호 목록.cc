#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

class Trie {
    bool leaf;
    Trie* node[10];
public:
    Trie() {
        leaf = false;
        for(auto &u : node) {
            u = NULL;
        }
    }
    ~Trie() {
        for(auto u : node) {
            delete u;
        }
    }
    bool insert(string s) {
        if(s.length() == 0) {
            leaf = true;
            for(auto u : node) {
                if(u) return true;
            }
            return false;
        }
        int idx = s[0] - '0';
        if(node[idx] == NULL) {
            node[idx] = new Trie();
        }
        return leaf || node[idx]->insert(s.substr(1));
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<string> arr(n);
        for(auto &u : arr) cin >> u;
        bool ans = false;
        Trie root;
        for(auto u : arr) {
            ans |= root.insert(u);
        }
        cout << (ans ? "NO" : "YES") << "\n";
    }

    return 0;
}