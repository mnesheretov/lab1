#pragma once

#include "transport.h"
#include <string>

using namespace std;

class Ground : public transport
{
public:
  virtual void Benzine();
  Ground(string Wings, double Wheels, int EnginePower, string Color);
  string getWings();
  void setWings(string enWings);
  double getWheels();
  void setWheels(double enWheels);
protected:
  string Wings ="";
  double Wheels =0.0 ;
};
