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

double PassengerPlane::getTank�apacity()
{
  return Tank�apacity;
}

void PassengerPlane::setTank�apacity(double enTank�apacity)
{
  if (enTank�apacity != 0.0)
  {
    Tank�apacity = enTank�apacity;
  }
}