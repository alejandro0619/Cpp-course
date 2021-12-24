#include "iostream"
// 
#include "namespaces.h"

using namespace std;
namespace myNewNamespace {
  void sayHi(){
    cout << "Hey \n";
  }
}

int main(){
  mycode::foo();
  return 0;
} 
