// AirlineTicket.cpp

#include <iostream>
#include <AirlineTicket.h>

using namespace std;

AirlineTicket::AirlineTicket() {
  // Initialize data members:
  fHasEliteSuperRewardStatus = false;
  mPassengerName = "Unknown Passenger";
  mNumberOfMiles = 0;
}

AirlineTicket::~AirlineTicket() {
  // Nothing much to do in terms of cleanup
}

int AirlineTicket::calculatePriceInDollars(){
  if(getHasEliteSuperRewardStatus()){
    // Elite Super Rewards Customers fly for free
    return 0;
  } else {
    // the cost is 0.1 per miles:
    return static_cast<int>((getNumberOfMiles() * 0.1));
  }
}

string AirlineTicket::getPassengerName() {
  return mPassengerName;
}

void AirlineTicket::setPassengerName(string inName) {
  mPassengerName = inName;
}

int AirlineTicket::getNumberOfMiles(){
  return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int inMiles){
  mNumberOfMiles = inMiles;
}

bool AirlineTicket::getHasEliteSuperRewardStatus(){
  return (fHasEliteSuperRewardStatus);
}

void AirlineTicket::setHasEliteSuperRewardStatus(bool inStatus){
  fHasEliteSuperRewardStatus = inStatus;
}