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
    Trie* children[2];
    bool end;
    int cnt;

    Trie() : end(false), cnt(0) {
        children[0] = children[1] = 0;
    }

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
        if(children[next] == NULL) {
            children[next] = new Trie;
            cnt++;
        }
        children[next]->_insert(key, index + 1);
    }
    bool _find(vector<int>& key, int depth) {
        if(depth == key.size()) return end;
        int next = key[depth];
        if(children[next] == NULL) return false;
        return children[next]->_find(key, depth + 1);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    Trie root;
    for(int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        vector<int> arr;
        while(input > 1) {
            arr.push_back(input%2);
            input /= 2;
        }
        reverse(all(arr));
        root.insert(arr);
    }

    Trie* curr = &root;
    while(curr->cnt == 1) {
        if(curr->end) break;
        if(curr->children[0] != NULL) curr = curr->children[0];
        else curr = curr->children[1];
    }

    ll ans = 0;
    queue<Trie*> _q;
    _q.push(curr);
    while(!_q.empty()) {
        Trie* curr = _q.front(); _q.pop();
        ans++;
        for(auto u : curr->children) {
            if(u != NULL) _q.push(u);
        }
    }
    cout << ans;

    return 0;
}