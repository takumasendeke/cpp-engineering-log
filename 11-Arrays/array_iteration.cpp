#include <iostream>
#include <string>

using std::cout;
using std::string;

double gradePointAverage(double grades[],int length);

int main(){
    string companies[] = {"butterfly","dhs","tihbar","sanwei"};

    int length = sizeof(companies) / sizeof(string);

    for (int i = 0; i <= length - 1; i++ ){
        cout << companies[i] << "\n";
    }

    // for each loop - less syntax
    for(string company: companies){
        cout << company << "\n";
    }

    double grades[] = {84,69,73,76,75};
    int lengthGrade = sizeof(grades) / sizeof(double) - 1 ;
    cout << gradePointAverage(grades,lengthGrade);

    return 0;
}

double gradePointAverage(double grades[], int length){ 
    double GPA = 0;

    for (int i = 0 ; i < length ; i++ ){
        GPA += grades[i]; 
    }

    return GPA / length;
}
