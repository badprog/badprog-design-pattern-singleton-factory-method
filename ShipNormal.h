#ifndef __BADPROG_SHIPNORMAL_H__
#define __BADPROG_SHIPNORMAL_H__

#include "IShip.h"

// Badprog.com

// ----------------------------------------------------------------------------
// ShipNormal
// ----------------------------------------------------------------------------
class ShipNormal : public IShip {
public:

	ShipNormal();
	virtual ~ShipNormal();

	void setSize(float sizeNew);
	const float getSize() const;
	void setSpeed(float speedNew);
	const float getSpeed() const;

};

#endif // __BADPROG_SHIPNORMAL_H__