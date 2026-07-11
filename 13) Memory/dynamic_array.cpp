#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::cin;

int main(){

    char *pGrades = nullptr;

    int size;
    cout << "How many grades to add? " << "\n";
    cin >> size; 

    pGrades = new char[size]; // heap rather than stack 

    for (int i = 0; i < size; i++){
        cout << "Enter Grades: ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++){
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;
    return 0;
}