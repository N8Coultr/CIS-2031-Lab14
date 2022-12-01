#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::string;

// This function prints out a message with the contents
// of a string and it's length
void printTheString(string s) {
    //❓❓ QUESTION 1:
    cout << "The string '" << s << "' is " << s.length() << " characters long." << endl;
}

int main() {
    //❓❓ QUESTION 2:
    string myString = "Hello";
    printTheString(myString);

    //❓❓ QUESTION 3:
     // 🡰 delete this line for question 3
    myString.append(" C++ Class!");
    printTheString(myString);

    //❓❓ QUESTION 4:
    return 0;  // 🡰 delete this line for question 4
    myString.replace(6, string::npos, "World.");
    printTheString(myString);
}
