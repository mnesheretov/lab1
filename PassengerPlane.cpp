#include <iostream>
#include <string>
#include "PassengerPlane.h"

using namespace std;

void PassengerPlane::Benzine()
{
  cout << "Air (PassengerPlane)" << endl;
}

string PassengerPlane::getPeopleCapacity()
{
  return PeopleCapacity;
}

void PassengerPlane::setPeopleCapacity(string enPeopleCapacity)
{
  if (enPeopleCapacity != "")
  {
    PeopleCapacity = enPeopleCapacity;
  }
}

double PassengerPlane::getTankÑapacity()
{
  return TankÑapacity;
}

void PassengerPlane::setTankÑapacity(double enTankÑapacity)
{
  if (enTankÑapacity != 0.0)
  {
    TankÑapacity = enTankÑapacity;
  }
}