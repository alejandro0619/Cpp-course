#include "iostream"

using namespace std;
namespace myNewNamespace {
  void sayHi(){
    cout << "Hey \n";
  }
}
int main(){
  myNewNamespace::sayHi();
   return 0;
}
