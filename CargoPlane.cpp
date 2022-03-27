#include <iostream>
#include <string>
#include "CargoPlane.h"

using namespace std;

void CargoPlane::Benzine()
{
  cout << "Air (CargoPlane)" << endl;
}

double CargoPlane::getCapacity()
{
  return Capacity;
}

void CargoPlane::setCapacity(double enCapacity)
{
  if (enCapacity != 0.0)
  {
    Capacity = enCapacity;
  }
}
double CargoPlane::getFlightRange()
{
  return FlightRange;
}

void CargoPlane::setFlightRange(double enFlightRange)
{
  if (enFlightRange != 0.0)
  {
    FlightRange = enFlightRange;
  }
}