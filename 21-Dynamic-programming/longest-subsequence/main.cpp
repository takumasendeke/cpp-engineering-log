#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;

int longestSubsequence(const string& s1,const string& s2){

    int row = s1.size();
    int column = s2.size();

    // +1 for the empty string case 
    vector<vector<char>> matrix(row + 1,vector<char>(column + 1));

    for (int i = 0; i < row + 1 ; i++ ){
        matrix[i][0] = 0; // set first elements to 0
        matrix[0][i] = 0;
    }

    for (int i = 1; i < row + 1 ; i++ ){
        for (int j = 1; j < column + 1; j++){
            matrix[i][j] = s1[i] == s2[j] ? 1 : 0; 
        }
    }

    int longest = 0;

    for (int i = 0; i < row + 1 ; i++){
        for (int j = 0; j < column + 1; j++){
            if (matrix[i][j] == matrix[i + 1][j + 1] && matrix[i][j] == 1){
                longest++;
            }
        }
    }

    return longest;
}

int main(){

    string s1 = "Town";
    string s2 = "From";

    cout << longestSubsequence(s1,s2);

    return 0;
}