#include <iostream>
#include "Employee.h"
namespace Records {
  const int kMaxEmployees = 100;
  const int kFirstEmployeeNumber = 1000;

  class Database {
    public:
      Database();  // constructor
      ~Database(); // destructor

      Employee &addEmployee(
        std::string firstname, 
        std::string lastname);
      
      Employee &getEmployeeByID(int inEmployeeNumber);
      Employee &getEmployee(
        std::string firstname,
        std::string lastname);

      void displayAll();
      void displayCurrent(); // display employees currently hired
      void displayFormer(); // display employees no longer hired
    
    private:
      Employee employees[kMaxEmployees];
      int nextSlot;
      int nextEmployeeNumber;
  };
}