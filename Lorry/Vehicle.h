#ifndef VEHICLEH
#define VEHICLEH
#include <iostream>
#include <cstdlib>
using namespace std;
class Vehicle // base class
{protected:
	int wheels;    // number of wheels
	float weight;        // unladen weight
	public:
	Vehicle(int inwheels, float inweight);  // constructor
	virtual int getwheels(void);       // how many wheels
	virtual float getweight(void);     // how heavy
	virtual void service(void);
};
class Car : public Vehicle         // derived class
{
	int numpassengers;              // number of passengers

	public:
	Car(int numwheels, float inweight, int people );
	int getpassengers(void);        // how many passengers
	virtual void service(void);
};
class Lorry : public Vehicle //inherit vehicle class
{
	float height;    //the height of the lorry
public:
	Lorry(int inwheels, float inheight, float inweight);
	float getheight(void);
	virtual void service(void);
};
#endif

