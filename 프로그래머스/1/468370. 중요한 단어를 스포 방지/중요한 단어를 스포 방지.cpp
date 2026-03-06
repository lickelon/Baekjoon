#include <bits/stdc++.h>

using namespace std;

struct word_data {
    string word;
    int st;
    int ed;
};

int solution(string message, vector<vector<int>> spoiler_ranges) {
    int answer = 0;
    message += " ";
    
    int n = message.length();
    vector<word_data> words;
    for(int i = 0; i < n; ) {
        int j = i;
        while (j < n && message[j] != ' ') j++;
        words.push_back({message.substr(i, j - i), i, j - 1});
        i = j + 1;
    }
    
    set<string> word_set;
    vector<string> hwords;
    for(int i = 0; i < words.size(); i++) {
        bool flag = false;
        for(auto r : spoiler_ranges) {
            if(!(words[i].st > r[1] || words[i].ed < r[0])) {
                flag = true;
            }
        }
        if(flag) {
            hwords.emplace_back(words[i].word);
        }
        else {
            word_set.insert(words[i].word);
        }
    }
    
    for(auto word : hwords) {
        if(word_set.find(word) == word_set.end()) {
            answer++;
        }
        word_set.insert(word);
    }
    
    return answer;
}