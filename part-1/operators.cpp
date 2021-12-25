#include <iostream>
using namespace std;

void basicCalc(){
  int someInteger = 256;
  short someShort;
  long someLong;
  float someFloat;
  double someDouble;

  someInteger++;
  someInteger *= 2;
  someShort = (short)someInteger;
  someLong = someShort * 10000;
  someFloat = someLong + 0.25;
  someDouble = (double(someFloat) * 500) / 1000;

  cout << someDouble << endl;
}

int main(int argc, char** argv) {
  basicCalc();
}