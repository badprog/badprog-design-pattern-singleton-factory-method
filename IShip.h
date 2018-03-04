#ifndef __BADPROG_ISHIP_H__
#define __BADPROG_ISHIP_H__

#include <iostream>

// Badprog.com

// ----------------------------------------------------------------------------
// ShipTiny
// ----------------------------------------------------------------------------
class IShip
{
	public:
		virtual ~IShip() {}

		virtual const float getSize() const = 0;
		virtual void setSize(float sizeNew) = 0;
		virtual const float getSpeed() const = 0;
		virtual void setSpeed(float speedNew) = 0;

	protected:
		float _size;
		float _speed;
};

#endif // __BADPROG_ISHIP_H__
