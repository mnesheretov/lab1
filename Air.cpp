#include <iostream>
#include <string>
#include "Air.h"

using namespace std;

void Air::Benzine()
{
  cout << "Air" << endl;
}
Air::Air(string Wings, double Wheels, int power, string Color) : transport(power, Color)
{
  this->Wings = Wings;
  this->Wheels = Wheels;
}
string Air::getWings()
{
  return Wings;
}

void Air::setWings(string enWings)
{
  if (enWings != "")
  {
    Wings = enWings;
  }
}

double Air::getWheels()
{
  return Wheels;
}

void Air::setWheels(double enWheels)
{
  if (enWheels != 0.0)
  {
    Wheels = enWheels;
  }
}