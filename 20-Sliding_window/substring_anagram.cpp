#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using std::cout;
using std::string;
using std::set;
using std::includes;

bool hasSubstringAnagram(const string &s, const string &a){

    int length = s.length();
    int k = a.length(); // window size

    // edge case
    if (length < k ){
        return false;
    }

    // sliding window
    set<char> anagram;

    for (char c: a){
        anagram.insert(c);
    }

    set<char> temp;

    for (int i = 0; i < k; i++){
        temp.insert(s[i]);
    }

    if (includes(temp.begin(),temp.end(),anagram.begin(),anagram.end())){
        return true;
    }
    

    for (int i = k; i < length; i++){
        temp.insert(s[i]);
        temp.erase(temp.find(s[i - k]));
        

        if (includes(temp.begin(),temp.end(),anagram.begin(),anagram.end())){
            return true;
        }
    }

    return false;
}

int main(){

    string test = "greyhounds";
    string test1 = "hoy";

    string displaySolution = hasSubstringAnagram(test,test1) == 1 ? "true" : "false";

    cout << displaySolution;

    return 0;
}