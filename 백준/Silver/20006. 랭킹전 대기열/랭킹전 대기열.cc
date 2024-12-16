#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct player{
    int level;
    string id;
};

struct room{
    int level;
    int limit;
    vector<player> players;
    room(int level, int limit) {
        this->level = level;
        this->limit = limit;
    }
    bool join(player p) {
        if(players.size() == limit) return false;
        if(abs(level - p.level) > 10) return false;
        players.emplace_back(p);
        return true;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int p, m;
    cin >> p >> m;

    vector<room> rooms;
    for(int i = 0; i < p; i++) {
        player p;
        cin >> p.level >> p.id;
        bool flag = false;
        for(auto &e : rooms) {
            if(e.join(p)) {
                flag = true;
                break;
            }
        }
        if(!flag) {
            rooms.emplace_back(p.level, m);
            rooms.back().join(p);
        }
    }

    for(auto room : rooms) {
        if(room.limit == room.players.size()) cout << "Started!\n";
        else cout << "Waiting!\n";
        sort(all(room.players), [](player a, player b){return a.id < b.id;});
        for(auto e : room.players) {
            cout << e.level << " " << e.id << "\n";
        }
    }

    return 0;
}