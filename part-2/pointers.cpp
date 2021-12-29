#include <iostream>

// We can put a variable in the heap by using a similar syntax:
int main(){
  // declaring a variable in the heap with the value of 5
  int * myIntegerPointer = new int[5];
  // "shadowing the variable"
  *myIntegerPointer = 6;

  // Pointers don’t always point to heap memory. You can declare a pointer that points to a variable on the stack, even another pointer. 
  //To get a pointer to a variable, you use the & "address of" operator:
  int i = 55;
  // This variable is equal to the value pointed by i, which is 55
  int *myIntegerPointer2 = &i; // Points to the variable with the value of 55

  /*
  C++ has a special syntax for dealing with pointers to structures. Technically, if you have a pointer to a structure, you can access its fields by first dereferencing it with *, then using the normal. syntax, as in the code that follows, which assumes the existence of a function called getEmployee().

  EmployeeT* anEmployee = getEmployee();
  cout << (*anEmployee).salary << endl;

  This syntax is a little messy. The -> (arrow) operator lets you perform both the dereference and the field access in one step. The following code is equivalent to the preceding code but is easier to read.

  EmployeeT* anEmployee = getEmployee();
  cout << anEmployee->salary << endl;
  */
 
  
}

