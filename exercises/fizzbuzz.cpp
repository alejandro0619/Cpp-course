#include <iostream>
void fizzBuzz(int n, int limit) {
  // I'm going to resolve this using for loop
  for (n; n <= limit; n++){
    if(n % 15 == 0) {
      std::cout << n << " is FizzBuzz" << std::endl;
    } else if (n % 3 == 0) {
      std::cout << n << " is Fizz" << std::endl;
    } else if (n % 5 == 0) {
      std::cout << n << " is Buzz" << std::endl;
    } else {
      std::cout << n << std::endl;
    }
  }
}

int main(){
  fizzBuzz(0, 100);
}