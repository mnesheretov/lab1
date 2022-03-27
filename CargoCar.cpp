#include <iostream>
#include <string>
#include "CargoCar.h"

using namespace std;

void CargoCar::Benzine()
{
  cout << "Ground (CargoCar)" << endl;
}

double CargoCar::getLoadCopacity()
{
  return LoadCopacity;
}

void CargoCar::setLoadCopacity(double enLoadCopacity)
{
  if (enLoadCopacity != 0.0)
  {
    LoadCopacity = enLoadCopacity;
  }
}
string CargoCar::getSize()
{
  return Size;
}

void CargoCar::setSize(string enSize)
{
  if (enSize != " ")
  {
    Size = enSize;
  }
}