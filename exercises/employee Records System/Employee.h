#include <iostream>

namespace Records {
  const int kDefaultStartingSalary = 3000;

  class Employee {
    public:
      Employee();
      ~Employee();

      void promote(int raiseAmount = 1000);
      void demote(int demeritAmount = 1000);
      void hire();
      void fire();
      void display();

      // getters and setters:
      void setFirstName(std::string firstName);
      std::string getFirstName();
      void setLastName(std::string lastName);
      std::string getLastName();
      void setEmployeeNumber(int employeeNumber);
      int getEmployee();
      void setSalary(int newSalary);
      int getSalary();
      bool getIsHired();

  private:
    std::string firstName;
    std::string lastName;
    int employeeNumber;
    int salary;
    bool hired;
  }
}