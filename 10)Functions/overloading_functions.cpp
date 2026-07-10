#include <iostream>
#include <string>

using std::cout;
using std::string;

void proteinShake();
void proteinShake(string addons);

int main(){
    string addons = "oats, honey, bannana, egg, creatine";

    proteinShake(addons);
    proteinShake();
    
    return 0;
}

void proteinShake(){
    cout << "Whey protein! \n";
    cout << "Milk";
}

void proteinShake(string addons){
    cout << "Whey protein! \n";
    cout << "Milk \n";
    cout << addons;

}