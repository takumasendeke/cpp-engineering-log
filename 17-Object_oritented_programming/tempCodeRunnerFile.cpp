#include <iostream>
#include <string>

using std::cout;
using std::string;

enum eyecolour{
    unknown = -1,
    brown = 0,
    green = 1,
    blue = 2,
    grey = 3,
};

enum bloodtype{
    unknown = -1,
    O = 0,
    A = 1,
    B = 2,
    AB = 3,
};

struct vitals {
    int height; // cm
    int weight; // kg
};

class Human{
    public:
    // attributes
        string name = "";
        int age = -1;
        vitals vitals;
        bloodtype bloodtype;
        eyecolour eyecolour;

    // methods
    void to_string(Human human){
        cout << "Hello " << human.name << "\nage: " << human.age 
        << "\n Height:" << human.vitals.height << "\n Weight:" << human.vitals.weight;
    }
        
};

int main(){

    Human Taku; 

    Taku.name = "Takudzwa Antony Masendeke";
    Taku.vitals.height = 175;
    Taku.vitals.weight = 63; 

    Taku.to_string(Taku);

    return 0;
}