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
  double getTank�apacity();
  void setTank�apacity(double enTank�apacity);
protected:
  string PeopleCapacity ="";
  double Tank�apacity = 0.0;
};
