#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using std::cout;
using std::string;
using std::map;
using std::max;

int longestUniqueSubstring(const string& word){
    int length = word.size();
    int longest = 0;
    int start = 0;

    map<char,int> characters = {};

    for (int end = 0; end < length; end++){
        char lastLetter = word.at(end);

        characters[lastLetter]++;

        while (characters[lastLetter] > 1){
            char firstLetter = word.at(start);
            characters[firstLetter]--;
            start++;
        }
        
        longest = max(longest, (end - start) + 1);
    }

    return longest;
}

int main(){

    string word = "pwwkew";
    
    cout << longestUniqueSubstring(word);

    return 0;
}