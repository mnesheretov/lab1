#pragma once
#include <string>


using namespace std;

class transport
{
public:
	virtual void Benzine() = 0;
	transport(int EnginePower, string Color);
	void setEnginePower(int enEnginePower);
	int getEnginePower();
	void setColor(string enColor);
	string getColor();
protected:
	int EnginePower = 0 ;
	string Color = "";
};