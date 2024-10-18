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

    Trie() : end(false) {children[0] = children[1] = NULL;}

    void insert(vector<int>& key) {
        this->_insert(key, 0);
    };
    int find(vector<int>& key) {
        return this->_find(key, 0, 0);
    };

private:
    void _insert(vector<int>& key, int index) {
        if(index == key.size()) {
            end = true;
            return;
        }
        int next = key[index];
        if(children[next] == NULL) children[next] = new Trie();
        children[next]->_insert(key, index + 1);
    }
    int _find(vector<int>& key, int depth, int num) {
        int ret;
        int next = key[depth];
        if(children[!next] == NULL) ret = next;
        else {
            ret = !next;
            next = !next;
        }
        if(depth == key.size()) return num;
        return children[next]->_find(key, depth + 1, num*2 + ret);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    Trie root;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        bitset<31> bs(input);
        vector<int> arr(31);
        for(int i = 0; i < 31; i++) {
            arr[i] = bs[i];
        }
        reverse(all(arr));
        root.insert(arr);
        int f = root.find(arr);
        ans = max(ans, input ^ root.find(arr));
    }
    cout << ans << "\n";

    return 0;
}