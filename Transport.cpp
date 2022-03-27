#include <iostream>
#include <string>
#include "transport.h"

using namespace std;

void transport::Benzine()
{
  cout << "Transport" << endl;
}

transport::transport(int EnginePower = 0, string Color = " ")
{
  this->EnginePower = EnginePower;
  this->Color = Color;
}

int transport::getEnginePower()
{
  return EnginePower;
}

void transport::setEnginePower(int enPower)
{
  if (enPower > 0)
  {
    EnginePower = enPower;
  }
}

string transport::getColor()
{
  return Color;
}



void transport::setColor(string enColor)
{
  if (enColor != "")
  {
    Color = enColor;
  }
}

