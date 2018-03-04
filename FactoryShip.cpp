#include <memory>

#include "FactoryShip.h"
#include "ShipTiny.h"
#include "ShipNormal.h"
#include "ShipEnormous.h"

// Badprog.com

// ----------------------------------------------------------------------------
// CTOR
// ----------------------------------------------------------------------------
FactoryShip::FactoryShip() {
}

// ----------------------------------------------------------------------------
// DTOR
// ----------------------------------------------------------------------------
FactoryShip::~FactoryShip() {
}

// ----------------------------------------------------------------------------
// createShip
// ----------------------------------------------------------------------------
std::unique_ptr<IShip> FactoryShip::createShip(SHIP_TYPE shipType) {
	switch(shipType) {
		case SHIP_TINY:     return std::make_unique<ShipTiny>();
		case SHIP_NORMAL: 	return std::make_unique<ShipNormal>();
		case SHIP_ENORMOUS: return std::make_unique<ShipEnormous>();
		default:			      return std::make_unique<ShipNormal>();
	}
}
