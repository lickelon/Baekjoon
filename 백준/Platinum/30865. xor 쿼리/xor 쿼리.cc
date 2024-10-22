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
    int end;
    int cnt;

    Trie() : end(0), cnt(0) {
        children[0] = children[1] = 0;
    }

    void insert(vector<int>& key, int add) {
        this->_insert(key, 0, add);
    };
    int find(vector<int>& key) {
        return this->_find(key, 0);
    };

private:
    void _insert(vector<int>& key, int index, int add) {
        this->cnt += add;
        if(index == key.size()) {
            end += add;
            return;
        }
        int next = key[index];
        if(children[next] == NULL) children[next] = new Trie;
        children[next]->_insert(key, index + 1, add);
    }
    int _find(vector<int>& key, int depth) {
        if(depth == key.size()) return this->cnt;
        int next = key[depth];
        if(children[next] == NULL) return this->end;
        return this->end + children[next]->_find(key, depth + 1);
    }
};

vector<int> int_to_bits(int num) {
    vector<int> temp(31);
    bitset<31> bs(num);
    for(int i = 0; i < 31; i++) {
        temp[i] = bs[30-i];
    }
    return temp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n+1);

    Trie root;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        vector<int> ret = int_to_bits(arr[i]);
        root.insert(ret, 1);
    }
    int q;
    cin >> q;
    while(q--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1) {
            vector<int> ret = int_to_bits(arr[b]);
            root.insert(ret, -1);
            arr[b] = c;
            ret = int_to_bits(arr[b]);
            root.insert(ret, 1);
            continue;
        }
        Trie* curr = &root;
        vector<int> ret = int_to_bits(c);
        int ans = 0;
        for(int i = 0; i < ret.size(); i++) {
            int next;
            if(curr->children[!ret[i]] != NULL && curr->children[!ret[i]]->cnt >= b) {
                next = !ret[i];
            }
            else {
                if(curr->children[!ret[i]] != NULL) b -= curr->children[!ret[i]]->cnt;
                next = ret[i];
            }
            ans *= 2;
            ans += next;
            curr = curr->children[next];
        }
        cout << (ans ^ c) << "\n";
    }

    return 0;
}