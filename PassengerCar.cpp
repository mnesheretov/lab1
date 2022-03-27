#include <iostream>
#include <string>
#include "PassengerCar.h"

using namespace std;

void PassengerCar::Benzine()
{
  cout << "Ground (PassengerCar)" << endl;
}


PassengerCar::PassengerCar(int Capacity, double FuelConsumption) : Ground(Wings, Wheels, EnginePower, Color) 
{
  this->Capacity = Capacity;
  this->FuelConsumption = FuelConsumption;
}




int PassengerCar::getCapacity()
{
  return Capacity;
}

void PassengerCar::setCapacity(int enCapacity)
{
  if (enCapacity != 0)
  {
    Capacity = enCapacity;
  }
}
double PassengerCar::getFuelConsumption()
{
  return FuelConsumption;
}

void PassengerCar::setFuelConsumption(double enFuelConsumption)
{
  if (enFuelConsumption != 0.0)
  {
    FuelConsumption = enFuelConsumption;
  }
}