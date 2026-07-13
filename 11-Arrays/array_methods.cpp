#include <iostream>
#include <string>

using std::string;
using std::cout;

int main() {
    string foods[200];

    fill(foods,foods + 200, "Protein"); // fill (start,end,vlaue) adress for start and end

    for (string food: foods){
        cout << food << "\n";
    }
    return 0;
}