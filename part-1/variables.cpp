/* 
In C++, variables can be declared just about anywhere in your code and can be used anywhere in the current block below the line where they are declared. 
In practice, your engineering group should decide whether variables will be declared at the start of each function or on an as-needed basis. 
Variables can be declared without being given a value. These undeclared variables generally end up with a semirandom value based on whatever is in memory at the time and are the source of countless bugs. 
Variables in C++ can alternatively be assigned an initial value when they are declared. The code that follows shows both flavors of variable declaration, both using ints, which represent integer values
*/

#include <iostream>

void showDataTypes(){
  int integer = 5; // positive and negative, range depends on the compiler settings
  short shortInteger = 45; // usually takes two bytes
  long longInteger = - 9; // usually takes 4 bytes
  unsigned int positiveInteger = 1;
  unsigned short positiveShortInteger = 9;
  unsigned long positiveLongInteger = 9000;

  float floatingPoint = 5.3; // decimal
  double doublePrecision = 5.33; // floating with more precision
  char singleCharacter = 'a';
  bool b = true; // true or false

  // C++ doesn't provide a basic string type.
  // But the standard implementation of string is provided by STD.
  //std::cout<< type of value:
  std::cout << positiveInteger;
}

void castingTypesExamples(){
  /* Variables can be converted to other types by casting them.
  * For example, an int can be cast to a bool.
  * C++ provides three ways of explicitly changing the type of a variable. 
  * The first method is a holdover from C, but is still the most commonly used. 
  * The second method seems more natural at first but is rarely seen. 
  * The third method is the most verbose, but often considered the cleanest.
  */
  int someInt = 2;
  std::cout << someInt << std::endl;
  bool someBool = (bool)someInt; // method 1
  bool someBool2 = bool(someInt); // method 2
  bool someBool3 = static_cast<bool>(someInt); // method 3
  // It will be casted as a false if its zero, true otherwise
  std::cout << someBool ;
}
using namespace std;
int main(int argc, char** argv) {
  //showDataTypes();
  //castingTypesExamples();
  return 0;
}
