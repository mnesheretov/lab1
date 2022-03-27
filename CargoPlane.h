#pragma once
#include "Air.h"
#include <string>

using namespace std;

class CargoPlane : public Air
{
public:
  virtual void Benzine();
  double getCapacity();
  void setCapacity(double enCapacity);
  double getFlightRange();
  void setFlightRange(double enFlightRange);
protected:
  double FlightRange = 0.0;
  double Capacity = 0.0;
};