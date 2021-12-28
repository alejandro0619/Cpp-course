#include <string>

class AirlineTicket {
  public:
  // the method with the same name of the class without type is the constructor.
    AirlineTicket();
    // The method with the same name of the class without a class and a ~ is called destructor, it is automatically called when the object is destroyed.
    ~AirlineTicket();
    int calculatePriceInDollars();
    std::string getPassengerName();
    void setPassengerName(std::string inName);
    int getNumberOfMiles();
    void setNumberOfMiles(int inMiles);
    bool getHasEliteSuperRewardStatus();
    void setHasEliteSuperRewardStatus(bool inStatus);
  private:
    std::string mPassengerName;
    int mNumberOfMiles;
    bool fHasEliteSuperRewardStatus;
};
