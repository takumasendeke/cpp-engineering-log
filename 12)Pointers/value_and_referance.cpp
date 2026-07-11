#include <iostream>

using std::string;
using std::cout;

// void swap(string x, string y);
void swap(string &x, string &y);

int main(){

    string x = "Fanata";
    string y = "Pepsi";

    swap(x,y); 

    cout << x << " " << y << "\n";

    return 0;
}

// pass by ref - chaning actual values
void swap(string &x, string &y){
    string temp;

    temp = x;
    x = y;
    y = temp;
}

// passing by valuec - making copies
//void swap(string x, string y){
//    string temp;

//    temp = x;
//    y = x;
//    y = temp;
//}
