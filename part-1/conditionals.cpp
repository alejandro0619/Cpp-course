#include<iostream>

// * A fancy cascading if else statement:
void ifStatement(){
  int i = 4;

  if(i > 5){
    std::cout << "i is greater than 5" << std::endl;
  } else if (i < 3) {
    std::cout << "i is greater than 3" << i << std::endl;
  } else {
    std::cout << "i is 4" << std::endl;
  }
}

// * A switch statement:
void switchStatement() {
 typedef enum { kOpenMenuItem, kSaveMenuItem} MenuT;
 MenuT menuItemChoice;
 menuItemChoice = MenuT::kSaveMenuItem;

 switch (menuItemChoice) {
   // I can use both MenuT::kOpenMenuItem or 0 / 1 to evaluate the case. Lel it's crazy but cool.
 case MenuT::kOpenMenuItem:
   std::cout << "Open menu Item reached";
   break;
 
 default:
   std::cout << "Save menu Item reached";
   break;
 }

}

// Conditional operators:

 // main
 int main() {
   switchStatement();
   return 0;
}
