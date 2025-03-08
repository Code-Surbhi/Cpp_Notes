/*
    enum (short for "enumerations" means "specifically listed") is a special type that represents a group of constants (unchangeable values).
    To create an enum -> use the enum keyword, followed by the name of the enum, and separate the enum items with a comma:

    enum Level {
    LOW,
    MEDIUM,
    HIGH
    };

    To access the enum -> create a variable of it.
    Inside the main() method -> specify the enum keyword -> followed by the name of the enum -> name of the enum variable -> enum Level myVar;

    Now that you have created an enum variable (myVar), you can assign a value to it.
    The assigned value must be one of the items inside the enum (LOW, MEDIUM or HIGH) -> enum Level myVar = MEDIUM;
    
    By default, the first item (LOW) has the value 0, the second (MEDIUM) has the value 1, etc.
    If you now try to print myVar, it will output 1, which represents MEDIUM
*/
#include <iostream>
using namespace std;

enum Level {
    LOW,
    MEDIUM,
    HIGH
    };

enum level1 {
    LOW1 = 5,
    MEDUIM1 = 8,
    HIGH1 = 10
};

// if you assign a value to one specific item, the next items will update their numbers accordingly.

enum level2{
    LOW2 = 17,
    MEDIUM2, // automatically assign value 18 to it
    HIGH2 // automatically assign value 19 to it
};

int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;
  // Print the enum variable
  cout << myVar<<endl;

  enum level1 x = HIGH1;
  cout << x;

  return 0;
}
