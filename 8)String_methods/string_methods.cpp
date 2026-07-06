#include <iostream>
#include <string> // add this when - using std::string 

// https://cplusplus.com/reference/string/string/

using std::cout;
using std::string;
using std::cin;
// using std::endl; gonna start using \n instead 

int main() {

    string name;

    cout << "Enter you name \n";
    std::getline(cin,name); // using cin >> std::ws will make an empty name impossible 

    size_t name_length  = name.length(); // use size_t here because of name.length()
    bool empty = name.empty();

    string email;
    email = name.append("@gmail.com");

    cout << email << "\n";

    if (name_length > 12 ){
        cout << "Name can't be more than 12 characters \n";
     } 
    else if(empty){
        cout << "No name was insterted \n";

    } else {
        cout << "Hello my good friend " << name << "\n";
    }

    char first_letter;
    first_letter = name.at(0);

    cout << "First Letter :" << first_letter << "\n";

    name.insert(0,"Goat: ");
    cout << name << "\n";

    cout << name.find(' ') << "\n"; // for character


    name.erase(0,6);
    cout << name << "\n";

    name.clear();
    cout << "hi " << name << "\n";
    
    return 0;
}