#pragma once
#include "Ground.h"


using namespace std;

class PassengerCar : public Ground
{
public:
  virtual void Benzine();
  PassengerCar(int Capacity, double FuelConsumption);
  int getCapacity();
  void setCapacity(int enCapacity);
  double getFuelConsumption();
  void setFuelConsumption(double enFuelConsumption);
protected:
  int Capacity = 0;
 double FuelConsumption = 0.0;
};
