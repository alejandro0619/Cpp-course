// employeeStruct.h

/*
Structs let you encapsulate one or more existing types into a new type. The classic example of a struct is a database record. If you are building a personnel system to keep track of employee information, you will need to store the first initial, last initial, middle initial, employee number, and salary for each employee. A struct that contains all of this information is shown in the header file that follows.
*/

typedef struct {
  char firstInitial;
  char middleInitial;
  char lastInitial;
  int employeeNumber;
  int salary;
} EmployeeT;

