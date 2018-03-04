#ifndef __BADPROG_FACTORYSHIP_H__
#define __BADPROG_FACTORYSHIP_H__

#include <memory>
#include "IShip.h"

// Badprog.com

class FactoryShip {
public:
	// enum
	enum SHIP_TYPE { SHIP_TINY, SHIP_NORMAL, SHIP_ENORMOUS };

	FactoryShip();
	virtual ~FactoryShip();

	static std::unique_ptr<IShip> createShip(SHIP_TYPE shipType);

};

#endif // __BADPROG_FACTORYSHIP_H__
