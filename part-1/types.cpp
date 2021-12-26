#include <iostream>
// employee struc require:
#include "employeeStruct.h"

/*
In c++ you can use the basic types (int, boo, etc). to build more complex type of your own design.
Once you are an experienced C++ programmer, you will rarely use the following techniques, which are features brought in from C, because classes are far more powerful. 
Still, it is important to know about the two most common ways of building types so that you will recognize the syntax.
*/

// * Enumerated Types:
/*
An integer really represents a value within a sequence — the sequence of numbers. 
Enumerated types let you define your own sequences so that you can declare variables with values in that sequence. For
example, in a chess program, you could represent each piece as an int, with constants for the piece types, as shown in the following code. The integers representing the types are marked const to indicate that they can never change.
*/

// If I don't define values at default it automatically takes values from zero to n
typedef enum { kPieceTypeKing, 
               kPieceTypeQueen, 
               kPieceTypeRook, 
               kPieceTypePawn } PieceT;

// declaring a variable with PieceT type and bind it with PieceT::kPieceTypeRook value.
PieceT myPiece = PieceT::kPieceTypeRook;

// * Structs
/*
Structs let you encapsulate one or more existing types into a new type. The classic example of a struct is a database record. If you are building a personnel system to keep track of employee information, you will need to store the first initial, last initial, middle initial, employee number, and salary for each employee. A struct that contains all of this information is shown in the header file that follows.
*/

// I defined a struct over another file called employeStruct.h

// main:
using namespace std;
int main(){
  // create and populate an employee.
  EmployeeT firstEmployee;
  firstEmployee.firstInitial = 'A';
  firstEmployee.middleInitial = 'J';
  firstEmployee.lastInitial = 'L';
  firstEmployee.employeeNumber = 14;
  firstEmployee.salary = 2500;

  // output the values:
  cout << "Employee: " << firstEmployee.firstInitial << firstEmployee.middleInitial << firstEmployee.lastInitial << endl;
  cout << "Number: " << firstEmployee.employeeNumber << endl;
  cout << "Salary: $" << firstEmployee.salary << endl;

  return 0;
}