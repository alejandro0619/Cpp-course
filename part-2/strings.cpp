#include <iostream>
#include <string>
// There are three ways of working with strings:

// *C-style:
/*
A string of text like "Hello, World" is internally represented as an array of characters with the character ‘\0’ representing the end of the string. As you’ve seen, arrays and pointers are sometimes related. You could use either one to represent a string, as shown here:
*/

void cStyleStrings(){
  char arrayString[20] = "Hello, World";
  char *pointerString = "Hello, World";
}

void cppStyleStrings(){
  std::string myString = "Hello world";
  std::cout << "The value of the string is : " << myString <<std::endl;
}