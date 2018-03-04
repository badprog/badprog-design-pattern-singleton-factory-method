#ifndef __BADPROG_SHIPENORMOUS_H__
#define __BADPROG_SHIPENORMOUS_H__

#include "IShip.h"

// Badprog.com

// ----------------------------------------------------------------------------
// ShipEnormous
// ----------------------------------------------------------------------------
class ShipEnormous : public IShip {
public:

	ShipEnormous();
	virtual ~ShipEnormous();

	void setSize(float sizeNew);
	const float getSize() const;
	void setSpeed(float speedNew);
	const float getSpeed() const;

};

#endif // __BADPROG_SHIPENORMOUS_H__