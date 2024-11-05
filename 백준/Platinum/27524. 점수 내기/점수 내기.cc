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
    ll end;
    ll M;

    Trie() {
        end = 0; 
        M = 0;
    }

    void insert(vector<int>& key, ll score) {
        this->_insert(key, 0, score);
    };
    bool find(vector<int>& key) {
        return this->_find(key, 0);
    };

private:
    void _insert(vector<int>& key, int index, ll score) {
        if(index == key.size()) {
            end = score;
        }
        else {
            int next = key[index];
            if(children.find(next) == children.end()) children[next] = new Trie;
            children[next]->_insert(key, index + 1, score);
        }

        ll temp = 0;
        for(auto u : children) {
            temp = max(temp, u.second->M);
        }
        M = temp + end;
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

    Trie Mpre, mpre, Msuf, msuf;

    int q;
    cin >> q;
    while(q--) {
        string t;
        cin >> t;
        if(t[0] == '<') {
            string s;
            cin >> s;
            ll score;
            cin >> score;
            vector<int> temp(all(s));
            Mpre.insert(temp, score);
            mpre.insert(temp, -score);
        }
        if(t[0] == '>') {
            string s;
            cin >> s;
            ll score;
            cin >> score;
            vector<int> temp(all(s));
            reverse(all(temp));
            Msuf.insert(temp, score);
            msuf.insert(temp, -score);
        }
        if(t[0] == '+') {
            cout << Msuf.M + Mpre.M << "\n";
        }
        if(t[0] == '-') {
            cout << -msuf.M - mpre.M << "\n";
        }
    }

    return 0;
}