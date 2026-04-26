#include<bits/stdc++.h>

using namespace std;

int main() {
	vector<string> order_list;
    
	map<string, long long> a;
	map<string, long long> b;
	set<string> c;

	int na, nb, nc;
    cin >> na >> nb >> nc;

	string tmp_str = ""; 
	long long tmp_int = 0;
    
	for(int i = 0; i< na; i++) {
		cin >> tmp_str >> tmp_int;
		a[tmp_str] = tmp_int;
	}

	for (int i = 0; i < nb; i++) {
		cin >> tmp_str >> tmp_int;
		b[tmp_str] = tmp_int;
	}

	for (int i = 0; i < nc; i++) {
		cin >> tmp_str;
		c.insert(tmp_str);
	}

    int order;
    cin >> order;

	while (order--) {
		cin >> tmp_str;	
		order_list.push_back(tmp_str);
	}

	long long sum_a = 0;
	long long sum_b = 0;
	int cnt_b = 0;
	int cnt_c = 0;

	for (auto food : order_list) {
		if (a.find(food) != a.end()) {
			sum_a += a[food];
		}
		else if (b.find(food) != b.end()) {
			sum_b += b[food];
			cnt_b++;
		}
		else cnt_c++;
	}

	long long total;
	string result = "Okay";
    
	if (sum_a < 20000 && cnt_b >= 1) result = "No";
	else {
		total = sum_a + sum_b;
		if(total < 50000 && cnt_c >= 1) result = "No";
		else if (total >= 50000 && cnt_c >= 2 ) result = "No";
	}
	cout << result;
    
    return 0;
}