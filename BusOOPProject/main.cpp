#include "main.h"
#include "bus.h"
#include "manager.h"



int main() {
	Bus bs1("MAZ", "1234PM7", 14000, 10);
	Bus bs2("PAZ", "2345PM7", 23500, 15);
	Bus bs3("Mercedes Benz", "3456PM7", 21650, 17);
	Bus bs4("Scania", "4567PM7", 45000, 30);
	Bus bs5("Neoplan", "5678PM7", 113000, 87);

	Bus buses[5];
	buses[0] = bs1;
	buses[1] = bs2;
	buses[2] = bs3;
	buses[3] = bs4;
	buses[4] = bs5;

	Manager manager;

	Bus result = manager.find_bus_with_min_price(buses,5);

	cout << result.convert() << endl;

	system("pause");
	return 0;
}