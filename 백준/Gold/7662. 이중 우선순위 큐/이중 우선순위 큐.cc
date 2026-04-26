#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

template <typename T>
class dual_priority_queue {
public:
	dual_priority_queue() { _size = 0; }
	void push(T a) { 
		minQ.push(a);
		maxQ.push(a);
		_size += 1;
		dict[a] += 1;
	}
	void pop(int cond) {
		assert(cond == 1 || cond == -1);
		clean();
		if (_size == 0) return;
		if (cond == 1) {
			dict[maxQ.top()]--;
			maxQ.pop();
		}
		if (cond == -1) {
			dict[minQ.top()]--;
			minQ.pop();
		}
		_size -= 1;
	}
	T top(int cond) {
		assert(cond == 1 || cond == -1);
		clean();
		if (cond == 1) {
			return maxQ.top();
		}
		else if (cond == -1) {
			return minQ.top();
		}
	}
	int size() {
		return _size;
	}
	int empty() {
		return !size();
	}
	void clean() {
		while (!maxQ.empty() && dict[maxQ.top()] == 0) maxQ.pop();
		while (!minQ.empty() && dict[minQ.top()] == 0) minQ.pop();
	}

private:
	priority_queue<T, vector<T>, greater<T>> minQ;
	priority_queue<T> maxQ;
	map<T, int> dict;
	int _size;
};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		dual_priority_queue<ll> _dpq;
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			string s;
			ll input;
			cin >> s >> input;
			if (s[0] == 'I') {
				_dpq.push(input);
			}
			else if (s[0] == 'D') {
				if(!_dpq.empty()) _dpq.pop(input);
			}
		}

		if (_dpq.empty()) {
			cout << "EMPTY\n";
		}
		else {
			cout << _dpq.top(1) << " " << _dpq.top(-1) << "\n";
		}
	}

	return 0;
}