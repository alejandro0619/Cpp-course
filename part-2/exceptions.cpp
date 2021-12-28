// Read docs/exceptions.md
#include <iostream>
#include <stdexcept>

double divideNumbers( double x, double y) {
  // x: numerator, y: denominator
  if(y == 0) {
    throw std::exception();
  } else {
    return (x / y);
  }
}

void handleTheException(){
  try {
    divideNumbers(4, 0);
    divideNumbers(4, 5);
  } catch (std::exception e) {
    std::cout << "An error ocurred " << std::endl;
  }
}
int main(){
  handleTheException();
}