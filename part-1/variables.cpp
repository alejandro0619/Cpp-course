/* 
In C++, variables can be declared just about anywhere in your code and can be used anywhere in the current block below the line where they are declared. 
In practice, your engineering group should decide whether variables will be declared at the start of each function or on an as-needed basis. 
Variables can be declared without being given a value. These undeclared variables generally end up with a semirandom value based on whatever is in memory at the time and are the source of countless bugs. 
Variables in C++ can alternatively be assigned an initial value when they are declared. The code that follows shows both flavors of variable declaration, both using ints, which represent integer values
*/

#include <iostream>

using namespace std;
int main(int argc, char** argv) {
  int randomValue;
  int initializedInt = 8;
  cout << randomValue << " Is a random value \n";
  cout << initializedInt << " Was assigned as initial value \n";
  
  return 0;
}
