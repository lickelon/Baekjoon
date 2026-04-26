#include <bits/stdc++.h>

using namespace std;

string cut(string a){
	bool flag = false;
	string ret = "";
	for(int i=0; i<a.length(); i++){
		if(a[i] != '0') flag = true;
		if(flag){
			ret += a[i];
		}
	}
	if(ret == "") return "0";
	return ret;
}

bool cmp(const string &a, const string &b){
	if(a.length() == b.length()) return a<b;
	return a.length() < b.length();
}

int main() {
    int n;
    vector<string> arr;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        s = "a" + s + "a";
        string temp = "";
        for(auto u : s) {
            if('0' <= u && u <= '9') {
                temp += u;
            }
            else {
                if(temp == "") continue;
                arr.push_back(cut(temp));
                temp = "";
            }
        }
    }
    sort(arr.begin(), arr.end(), cmp);
    for(auto u : arr) cout << u << "\n";
}