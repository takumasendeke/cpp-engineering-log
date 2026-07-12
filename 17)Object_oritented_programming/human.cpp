#include <iostream>
#include <string>

using std::cout;
using std::string;

// added class to enum (C++ 11) 
// scope resolution in classes
enum class EyeColour{
    unknown = -1,
    brown = 0,
    green = 1,
    blue = 2,
    grey = 3,
};

enum class Bloodtype{
    unknown = -1,
    O = 0,
    A = 1,
    B = 2,
    AB = 3,
};

struct Vitals {
    int height; // cm
    int weight; // kg
};

class Human{
    private:
    // attributes
        string name;
        int age;
        Vitals vitals;
        Bloodtype bloodtype;
        EyeColour eyecolour;

    public:
    // constructor 
    // use setters

    // const string &name to prevent creating a copy

    // old method
    // Human(const string &name, int age,int height, int weight, Bloodtype bloodtype, EyeColour eyecolour){
    //    setName(name);
    //    setAge(age);
    //    setHeight(height);
    //    setWeight(weight);
    //    setBloodType(bloodtype);
    //    setEyeColour(eyecolour);
    //}

    // new method
    Human(const string &name, int age,int height, int weight, Bloodtype bloodtype, EyeColour eyecolour): 
        name(name),age(age),vitals{height,weight},bloodtype(bloodtype),eyecolour(eyecolour) {}

    // old method 
    //Human(){
    //    name = "";
    //    age = -1;
    //    vitals.height = -1;
    //    vitals.weight = -1;
    //    bloodtype  = Bloodtype::unknown;
    //    eyecolour = EyeColour::unknown;
    //}

    // new more efficient method
    Human() : name(""),age(-1),vitals{-1,-1},bloodtype(Bloodtype::unknown),eyecolour(EyeColour::unknown) {}

    // getters 

    // use const to ensure the variable being read is read only
    string getName() const {
        return name;
    }

    int getAge(){
        return age;
    }

    int getHeight(){
        return vitals.height;
    }

    int getWeight(){
        return vitals.weight;
    }

    Bloodtype getBloodType(){
        return bloodtype;
    }

    EyeColour getEyeColour(){
        return eyecolour;
    }

    // setters
    void setName(const string &name){
        this->name = name;
    }

    void setAge(int age){
        this->age = age;
    }

    void setHeight(int height){
        vitals.height = height;
    }

    void setWeight(int weight){
        vitals.weight = weight;
    }

    void setBloodType(Bloodtype bloodtype){
        this->bloodtype = bloodtype;
    }

    void setEyeColour(EyeColour eyecolour){
        this->eyecolour = eyecolour;
    }

    // methods
    void diplayData(){
        cout << "Hello " << getName() << "\nage: " << getAge()
        << "\nHeight: " << getHeight() << "\nWeight: " << getWeight();
    }
        
};

int main(){

    Human Taku = Human("Takudzwa Antony Masendeke",21,175,63,Bloodtype::unknown,EyeColour::brown);     

    Taku.diplayData();

    return 0;
}