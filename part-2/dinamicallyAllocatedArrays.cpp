#include <iostream>

int* allocateDinamicallyArray() {
// This will create a variable that can grow in run time by using dynamic memory and placing the array in the heap instead of the stack.

/*
The * after the int type indicates that the variable you are declaring refers to some integer memory in the heap. Think of the pointer as an arrow that points at the dynamically allocated heap memory. It does not yet point to anything specific because you haven’t assigned it to anything; it is an uninitialized variable.
*/

// To initialize the pointer to new heap memory, you use the new command:

  int arraySize = 5;
  int *myVariableSizedArray;
  myVariableSizedArray = new int[arraySize];
  for (int i = 0; i < sizeof(myVariableSizedArray) -1; i++){
    std::cout << i << std::endl;
    myVariableSizedArray[i] = i;
  }
  return myVariableSizedArray;
}
int main() {
  int *result = allocateDinamicallyArray();
  for (int i = 0; i < sizeof(result) - 1; i++) {
    std::cout << result[i] << std::endl;
  }
}