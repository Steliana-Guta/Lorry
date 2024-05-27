#include <iostream>
#include <cstdlib>
#include "vehicle.h"
using namespace std;

int main()
{
	Vehicle* vehicles[3];
		
	vehicles[0] = new Vehicle(4, 200);
	vehicles[1] = new Car(4, 150, 2);
	vehicles[2] = new Lorry(6, 4.25, 450);
	Car* pCar = dynamic_cast<Car*>(vehicles[1]);
	Lorry* pLorry = dynamic_cast<Lorry*>(vehicles[2]);
	for (int i = 0; i < 3 ; i++)
	{
		cout << "This vehicle has " << vehicles[i]->getwheels() << " wheels, and it weights " << vehicles[i]->getweight() << "kg." << endl;
		if ( i == 1)
		{
			cout << "This car can fit " << pCar->getpassengers() << " passengers." << endl;
		}
		if (i == 2)
		{
			cout << "This lorry has a height of " << pLorry->getheight() << " m." << endl;
		}
		vehicles[i]->service();
	}
	
	

	
	/*Vehicle veh1(4, 200);
	cout << "This vehicle weights: " << veh1.getweight() << "kg, and has " << veh1.getwheels() << " wheels.\n" << endl;
	veh1.service();
	Car veh2(4,150,2);
	cout << "This car can fit " << veh2.getpassengers() << " passengers, it has " << veh2.getwheels() << " wheels, and it weights " << veh2.getweight() << " kg.\n" << endl;
	veh2.service();
	Lorry veh3(6, 3.85, 450);
	cout << "This lorry has: " << veh3.getwheels() << " wheels, " << veh3.getheight() << " m, and has " << veh3.getweight() << " kg.\n" << endl;
	veh3.service();*/
	system("PAUSE");
	return 0;
}