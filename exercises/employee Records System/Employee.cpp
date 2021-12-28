// Employee.cpp
#include <iostream>
#include "Employee.h"
#include <string>

using namespace std;

namespace Records {
  Employee::Employee(){
    firstName = "";
    lastName = "";
    employeeNumber = 0;
    salary = kDefaultStartingSalary;
    hired = false;
  }
  void Employee::promote(int raiseAmount){
    setSalary(getSalary() + raiseAmount);
  }
  void Employee::demote(int demeritAmount){
    setSalary(getSalary() - demeritAmount);
  }
}