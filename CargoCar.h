#pragma once
#include "Ground.h"
#include <string>

using namespace std;

class CargoCar : public Ground
{
public:
  virtual void Benzine();
  double getLoadCopacity();
  void setLoadCopacity(double enLoadCopacity);
  string getSize();
  void setSize(string enSize);
protected:
  double LoadCopacity = 0.0;
  string Size = "";
};
