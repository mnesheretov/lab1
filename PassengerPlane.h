#pragma once 
#include "Air.h"
#include <string>

using namespace std;

class PassengerPlane : public Air
{
public:
  virtual void Benzine();
  string getPeopleCapacity();
  void setPeopleCapacity(string enSize);
  double getTankÑapacity();
  void setTankÑapacity(double enTankÑapacity);
protected:
  string PeopleCapacity ="";
  double TankÑapacity = 0.0;
};
