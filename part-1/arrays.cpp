#include <iostream>

void loopThroughGivenArray(int a[5]) {
  // I don't know what *a means but the compiler yelled at me, so...
  // to get the size of an array we use the method sizeof(array) -1.
  for (int i = 0; i <= sizeof(*a) -1; i++) {
    std::cout << a[i] << std::endl ;
  }
}
using namespace std;
void loopThroughMultidimensionalArray(int a[3][3]){
  for (int i = 0; i < sizeof(*a[i]) -1; i++){
    for(int j = 0; j < sizeof(a[i][j]) -1; j++) {
      cout << "At index [" << i << ", " << j << "]"
           << "The array's value is: " << a[i][j] << endl;
    }
  }
}
int main(){
  int myArray[4] = {0, 1, 2, 3};
  //loopThroughGivenArray(myArray);
  int my2ndDimensionalArray[3][3] = {
      {0, 1, 2}, 
      {3, 4, 5}, 
      {6, 7, 8}};
  loopThroughMultidimensionalArray(my2ndDimensionalArray);
}