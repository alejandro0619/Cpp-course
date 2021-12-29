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
  Employee::~Employee(){

  }
  void Employee::promote(int raiseAmount){
    setSalary(getSalary() + raiseAmount);
    
  }
  void Employee::demote(int demeritAmount){
    setSalary(getSalary() - demeritAmount);
  }
  void Employee::hire(){
    hired = true;
  }
  void Employee::fire(){
    hired = false;
  }
  void Employee::display(){
    cout << "Name: " << getFirstName() << " "<< getLastName() << endl;
    cout << "Employee's ID: " << getEmployee() << endl;
    cout << "Salary: " << getSalary();
  }
  void Employee::setFirstName(string firstname) {
    // field = param
    firstName = firstname;
  }
  string Employee::getFirstName() {
    return firstName;
  }
  void Employee::setLastName(string lastname) {
    lastName = lastname;
  }
  string Employee::getLastName(){
    return lastName;
  }
  void Employee::setEmployeeNumber(int employeenumber){
    employeeNumber = employeenumber;
  }
  int Employee::getEmployee(){
    return employeeNumber;
  }
  void Employee::setSalary(int newSalary){
    salary = newSalary;
  }
  int Employee::getSalary(){
    return salary;
  }
  bool Employee::getIsHired(){
    return hired;
  }
}