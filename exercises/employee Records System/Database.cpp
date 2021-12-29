#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;
namespace Records {
  // Constructor
  Database::Database(){
    nextSlot = 0; // Initialized to 0
    nextEmployeeNumber = kFirstEmployeeNumber; // Initialized to 1000
  }
  // Destructor
  Database::~Database(){

  }
  Employee &Database::addEmployee(string firstname, string lastname){
    if(nextSlot >= kMaxEmployees){
      cerr << "The limit of the database is exceeded" << endl;
      throw exception();
    } else {
      Employee &employee = employees[nextSlot++];
      employee.setFirstName(firstname);
      employee.setLastName(lastname);
      employee.setEmployeeNumber(nextEmployeeNumber++);
      employee.hire();
      return employee;
    }
  }
  Employee &Database::getEmployeeByID(int employeeNumber){
    for (int index = 0; index < nextSlot; index ++){
      if(employees[index].getEmployee() == employeeNumber){
        return employees[index];
       } 
    }
     cerr << "No employee with that number" << endl;
     throw exception();
      
  }
  Employee &Database::getEmployee(string firstname, string lastname){
    for(int index = 0; index < nextSlot; index ++){
      if(employees[index].getFirstName() == firstname && employees[index].getLastName() == lastname){
        return employees[index];
      } 
    } 
    cerr << "No match with" << firstname << " " << lastname << "Was found" << endl;
     throw exception();
  }

  void Database::displayAll(){
    for (int index = 0; index < nextSlot; index ++){
      employees[index].display();
    }
  }

  void Database::displayCurrent(){
    for(int index = 0; index < nextSlot; index ++){
      if(employees[index].getIsHired()){
        employees[index].display();
      }
    }
  }
  
  void Database::displayFormer(){
    for(int index = 0; index < nextSlot; index ++){
      if(!employees[index].getIsHired()){
        employees[index].display();
      }
    }
  }
}