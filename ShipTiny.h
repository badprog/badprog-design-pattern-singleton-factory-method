#ifndef __BADPROG_SHIPTINY_H__
#define __BADPROG_SHIPTINY_H__

#include "IShip.h"

// Badprog.com

// ----------------------------------------------------------------------------
// ShipTiny
// ----------------------------------------------------------------------------
class ShipTiny : public IShip {
public:

	ShipTiny();
	virtual ~ShipTiny();

	void setSize(float sizeNew);
	const float getSize() const;
	void setSpeed(float speedNew);
	const float getSpeed() const;

};

#endif // __BADPROG_SHIPTINY_H__