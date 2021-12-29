// UserInterface.cpp
#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;
using namespace Records;
int displayMenu();
void doHire(Database& inDB);
void doFire(Database& inDB);
void doPromote(Database& inDB);
void doDemote(Database& inDB);

int displayMenu(){
  int selection;
  cout << endl;
  cout << "Employee Database" << endl;
  cout << "-----------------" << endl;
  cout << "1) Hire a new employee" << endl;
  cout << "2) Fire an employee" << endl;
  cout << "3) Promote an employee" << endl;
  cout << "4) List all employees" << endl;
  cout << "5) List all current employees" << endl;
  cout << "6) List all previous employees" << endl;
  cout << "0) Quit" << endl;
  cout << endl;
  cout << "---> ";
  cin >> selection;
return selection;
}

void doHire(Database &inDB){
  string firstname;
  string lastname;

  cout << "First name? ";
  cin >> firstname;
  cout << "Last name? ";
  cin >> lastname;

  try{
    inDB.addEmployee(firstname, lastname);
  } catch(std:: exception ex) {
    cerr << "Unable to add new Employee" << endl;
  }
}

void doFire(Database &inDB){
  int employeeNumber;
  cout << "Employee number? ";
  cin >> employeeNumber;

  try {
    Employee &emp = inDB.getEmployeeByID(employeeNumber);
    emp.fire();
    cout << "Employee " << employeeNumber << "Has been terminated" << endl;
  } catch (std::exception ex){
    cerr << "Unableto terminate employee!" << endl;

  }
}
void doPromote(Database &inDB){
  int employeeNumber;
  int raiseAmount;

  cout << "Employee number? ";
  cin >> employeeNumber;
  cout << "How much of a raise? ";
  cin >> raiseAmount;

  try {
    Employee &emp = inDB.getEmployeeByID(employeeNumber);
    emp.promote(raiseAmount);
  } catch(std::exception ex) {
    cerr << "Unable to promote employee!" << endl;
  }
}

int main(){
  Database eDB; // employeeDB
  bool done = false;

  while(!done){
    int selection = displayMenu();
    switch(selection){
      case 1:
        doHire(eDB);
        break;
      case 2:
        doFire(eDB);
        break;
      case 3:
        doPromote(eDB);
        break;
      case 4:
        eDB.displayAll();
        break;
      case 5:
        eDB.displayCurrent();
        break;
      case 6:
        eDB.displayFormer();
        break;
      case 0:
        done = true;
      default:
        cerr << "Unknown command" << endl;
    }
  }
  return 0;
   
}