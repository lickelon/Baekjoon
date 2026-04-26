#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define x first
#define y second

int ccw(pll a, pll b, pll c) {
    ll sa = a.x * b.y + b.x * c.y + c.x * a.y;
    ll sb = a.y * b.x + b.y * c.x + c.y * a.x;
    if (sa - sb < 0) return -1;
	else if (sa - sb == 0) return 0;
	else return 1;
}

bool comp1(pll &a, pll &b){
    if(a.y == b.y){
        return a.x < b.x;
    }
    else return a.y < b.y;
}

pll pivot = {0,0};

bool comp2(pll &a, pll &b) {
    pll pa = {a.x - pivot.x, a.y - pivot.y};
    pll pb = {b.x - pivot.x, b.y - pivot.y};
    if(pa.x != 0 || pa.y != 0 || pb.x != 0 || pb.y != 0) {
        ll det = pa.x * pb.y - pa.y * pb.x;
        if(det > 0) return true;
        else if(det == 0) {
            return pa.x*pa.x + pa.y*pa.y < pb.x*pb.x + pb.y*pb.y;
        }
        else return false;
    }
    else {
        return comp1(a, b);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;
    vector<pll> arr(N);

    for(int i = 0; i < N; i++) {
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr.begin(), arr.end(), comp1);
    pivot = arr[0];
    sort(arr.begin(), arr.end(), comp2);

    int st, mid, ed = 2;
    vector<int> _s;

    _s.push_back(0);
    _s.push_back(1);

    while(ed != N) {
        while(_s.size() >= 2) {
            mid = _s.back();
            _s.pop_back();
            st = _s.back();

            if(ccw(arr[st], arr[mid], arr[ed]) > 0) {
                _s.push_back(mid);
                break;
            }
        }
        _s.push_back(ed++);
    }

    cout << _s.size();

    return 0;
}