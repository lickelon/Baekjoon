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
    ll find(vector<int>& key) {
        return this->_find(key, 0, 0);
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
    ll _find(vector<int>& key, int depth, ll num) {
        if(depth == key.size()) return num;
        int st = 19 - key[depth];
        for(ll i = 0; i < 10; i++) {
            int next = (st - i) % 10;
            if(children.find(next) != children.end()) {
                return children[next]->_find(key, depth + 1, num*10ll + (9ll-i));
            }
        }
    }
};

vector<int> int_to_array(ll num, int size) {
    vector<int> arr(size);
    for(int i = 0; i < size; i++) {
        arr[i] = num % 10ll;
        num /= 10ll;
    }
    reverse(all(arr));
    return arr;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<ll> ja(m), sa(m);
    for(auto &u : ja) cin >> u;
    for(auto &u : sa) cin >> u;
    Trie jt, st;
    vector<int> temp;
    temp = int_to_array(ja[0], n);
    jt.insert(temp);
    temp = int_to_array(sa[0], n);
    st.insert(temp);

    ll js, ss;
    js = ss = 0;
    for(int i = 1; i < m; i++) {
        temp = int_to_array(ja[i], n);
        js = max(js, st.find(temp));
        jt.insert(temp);
        temp = int_to_array(sa[i], n);
        ss = max(ss, jt.find(temp));
        st.insert(temp);
    }
    if(js == ss) cout << "D";
    else cout << (js > ss ? "J" : "S");

    return 0;
}