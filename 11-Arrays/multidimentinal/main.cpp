#include <iostream>
#include <string>

using std::cout;

int main(){
    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int length = 3;

    for (int i = 0; i < length ; i ++){
        for (int j = 0; j < length ; j ++){
            cout << array[i][j];
        }
        cout << "\n";
    }
    return 0;
}