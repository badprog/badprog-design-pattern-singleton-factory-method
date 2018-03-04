#include <memory>

#include "IShip.h"
#include "FactoryShip.h"

// Badprog.com

// ----------------------------------------------------------------------------
// Main
// ----------------------------------------------------------------------------
int main()
{
	// init
	std::unique_ptr<IShip> ship1 = FactoryShip::createShip(FactoryShip::SHIP_TINY);
	std::unique_ptr<IShip> ship2 = FactoryShip::createShip(FactoryShip::SHIP_NORMAL);
	std::unique_ptr<IShip> ship3 = FactoryShip::createShip(FactoryShip::SHIP_ENORMOUS);

	// setting (data that should be retrieved from a file.txt for example)
	ship1->setSize(10);
	ship1->setSpeed(500);

	ship2->setSize(100);
	ship2->setSpeed(200);

	ship3->setSize(600);
	ship3->setSpeed(50);

	// getting data
	std::cout << "ship1 size = " << ship1->getSize() << std::endl;
	std::cout << "ship1 speed = " << ship1->getSpeed() << std::endl;

	std::cout << "ship2 size = " << ship2->getSize() << std::endl;
	std::cout << "ship2 speed = " << ship2->getSpeed() << std::endl;

	std::cout << "ship3 size = " << ship3->getSize() << std::endl;
	std::cout << "ship3 speed = " << ship3->getSpeed() << std::endl;

	return 0;
}
