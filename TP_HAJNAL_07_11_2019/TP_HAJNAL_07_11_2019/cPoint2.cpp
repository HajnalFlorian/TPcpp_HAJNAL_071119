#include "cPoint2.h"
#include <iostream>
using namespace std;
float cPoint2::getX()
{
	return nX;
}

float cPoint2::getY()
{
	return nY;
}
//seteur
void cPoint2::setX(float nX)
{
	this->nX = nX;
}

void cPoint2::setY(float nY)
{
	this->nY = nY;
}
//init
void cPoint2::init(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}
void cPoint2::deplacement(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}
cPoint2::cPoint2(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

float cPoint2::abcisse()
{
	return nX;
}

float cPoint2::ordonnee()
{
	return nY;
}


