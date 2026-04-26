#include <bits/stdc++.h>

using namespace std;

char vowel[] = {'a', 'e', 'i', 'o', 'u'};

int main() {
    while (true) {
        string s;
        cin >> s;
        if (s == "end") return 0;
        bool is_vowel = false;
        int cnt = 0;
        char before = 0;
        int before_type = -1;
        bool eo2 = false;
        bool ans = true;
        for (int i = 0; i < s.length(); i++) {
            int type = 0;
            for (auto u : vowel) {
                if (u == s[i]) type = 1;
            }
            if (type) {
                is_vowel = true;
            }
            if (before_type == type) cnt++;
            else cnt = 1;
            if (before == s[i]) {
                if (s[i] == 'e' || s[i] == 'o') {
                    if (eo2) {
                        ans = false;
                    }
                    else {
                        eo2 = true;
                    }
                }
                else {
                    ans = false;
                }
            }
            if (s[i] == 'e' || s[i] == 'o') {}
            else eo2 = false;
            if(cnt == 3) ans = false;
            before = s[i];
            before_type = type;
        }
        if(!is_vowel) ans = false;
        cout << "<" << s << ">" << " is " << (ans ? "" : "not ") << "acceptable.\n";
    }
}     