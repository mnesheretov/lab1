#include <iostream>
#include <stdio.h>
#include "Transport.h"
#include "PassengerPlane.h"
#include "CargoPlane.h"
#include "PassengerCar.h"
#include "CargoCar.h"
#include "Air.h"
#include "Ground.h"
#include "SetOfTransport.h"

using namespace std;

int main()
{

  Ground Toyota("None", 4.0, 250, "Black");
  Air Boing("Yes", 0, 100000, "White");
  

 setOfTransport PassengerCar;
 PassengerCar.AddTransport(&Toyota);
 PassengerCar.Print();

 setOfTransport PassengerPlane;
 PassengerPlane.AddTransport(&Boing);
 PassengerPlane.Print();

  return 0;
}