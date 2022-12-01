#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class LinkedList {
   private:
    // The internal linked-list node struct
    struct List {
        string value;
        List *next;
    };

    // A pointer to this objects internal list
    List *theList;

   public:
    // Print the list to the provided ostream
    void print(std::ostream &out);

    //❓❓ Question 10: Declare the other linked list methods here:

    


};

int main() {}
