#include <iostream>
#include <AirlineTicket.h>

using namespace std;

int main() {
  AirlineTicket myTicket; //stack-based Airline
  myTicket.setPassengerName("Sherman T. Socketwrench");
  myTicket.setNumberOfMiles(700);
  int cost = myTicket.calculatePriceInDollars();
  cout << "This ticket will cost $" << cost << endl;

  AirlineTicket* myTicket2; // Heap-based AirlineTicket
  myTicket2 = new AirlineTicket(); // Allocate a new object
  // This is the same as -> arrow syntax: performs both dereference and field access in one step
  (*myTicket2).setPassengerName("Laudimore M. Hallidue");
  myTicket2->setNumberOfMiles(2000);
  myTicket2->setHasEliteSuperRewardStatus(true);
  int cost2 = myTicket2->calculatePriceInDollars();
  cout << "This other ticket will cost $" << cost2 << endl;
  delete myTicket2;
}