/*************************************************************************
* Automatic Pet feeder.
* 2020
*************************************************************************/

//Includes
#include <iostream>
#include <string>

//Defines

//Structures

//Classes
class Pond {
    int waterLevel;
  public:
    void setWaterLevel (int);
    int getWaterLevel {void};
};

//Global Variables
using namespace std;

//Function Declaration

int main()
{
  Pond pond;
  int pondWaterLevel = 0;
  cout << "Pond Monitoring System!" << endl;
  cout << "Current water level is: " << pondWaterLevel << endl;
  pond.setWaterLevel(40)
  cout << "New water level is: " << pond.getWaterLevel() << endl;
  return 0;
}

//Function Definitions

void Pond::setWaterLevel (int x) {
  waterLevel = x;
}

int Pond::getWaterLevel (void) {
  return waterLevel;
}
