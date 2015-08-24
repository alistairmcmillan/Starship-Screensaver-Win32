//
// 20/04/07
// * Starting
//
#include "ship.h"

Ship::Ship()
{
	posX = 0.0f;
	posY = 0.0f;
	radius = 0;
	heading = 0.0f;
	speed = 0.0f;
	starshipClass = 0;
}

Ship::~Ship()
{

}

void Ship::turnToPort()
{
	heading += 5.0;
	if (heading < 0.0) {
		heading = heading + 360.0;
	}
	if (heading > 360.0) {
		heading = heading - 360.0;
	}
	return;
}

void Ship::turnToStarboard()
{
	heading -= 5.0;
	if (heading < 0.0) {
		heading = heading + 360.0;
	}
	if (heading > 360.0) {
		heading = heading - 360.0;
	}
	return;
}
