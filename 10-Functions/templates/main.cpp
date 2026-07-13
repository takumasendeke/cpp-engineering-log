#include <iostream>
#include <string>

using std::cout;
using std::string;

template <typename T,typename U> // generate many overloaded function 

auto max(T x,U y){ // auto keyword to prevent choosing return type
    return (x > y) ? x : y;
}


/* // overloading can be cumbersome
double max(double x, double y){
    return (x > y) ? x : y;
}
*/

int main(){

    cout << max(6,7.454656);

    return 0;
}