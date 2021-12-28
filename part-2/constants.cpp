#include <string>
#include <iostream>
void usesOfConst(){
  // *Const constant:
  const std::string kVersionNumber = "3.52";

  // *Const to protect variables:
  const float myFloatNum = 5.6;
  // some Function that uses that variable as param but don't want to overwrite it:
  // void myFunc(const float myFloatNum) {...}

  // * Const references read docs/const-references.md
}

int main() {
 
}