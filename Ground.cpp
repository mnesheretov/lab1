#include <iostream>
#include <string>
#include "Ground.h"

using namespace std;

void Ground::Benzine()
{
  cout << "Ground" << endl;
}

Ground::Ground(string Wings , double Wheels, int EnginePower, string Color) : transport(EnginePower, Color)
{
  this->Wings = Wings;
  this->Wheels = Wheels;
}

string Ground::getWings()
{
  return Wings;
}

void Ground::setWings(string enWings)
{
  if (enWings != "")
  {
    Wings = enWings;
  }
}

double Ground::getWheels()
{
  return Wheels;
}

void Ground::setWheels(double enWheels)
{
  if (enWheels != 0.0)
  {
    Wheels = enWheels;
  }
}