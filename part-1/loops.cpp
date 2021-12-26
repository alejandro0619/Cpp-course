// C ++ provides three types of looping structures.
#include <iostream>
int whileStatement(int i){
  while(i < 40) {
    std::cout<< "Value of " << i <<std::endl;
    i++;
  }
  return i;
}

int doWhileStatement(int i) {
  do {
    std::cout<<"The value of i is" << i << std::endl;
    i++;
  } while (i < 5);
  return i;
}
int forLoopStatement(int i) {
  for (i; i < 5; i--){
    std::cout << "The value of i is " << i;
  }
  return i;
}
// main:
int main() {
 
 return 0;
}