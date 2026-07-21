#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int uniquePaths(int column, int row){
    vector<vector<int>> paths(row, vector<int>(column));

    for (int i = 0; i < row; i++){
        paths[0][i] = 1;
    }

    for (int i = 0; i < column; i++ ){
        paths[i][0] = 1;
    }

    for (int i = 1; i < column; i++){
        for (int j = 1; j < row; j++){
            paths[j][i] = paths[j - 1][i] + paths[j][i - 1];
        }
    }

    return paths[column - 1][row - 1];
}

int main(){

    cout << uniquePaths(3,3);

    return 0;
}