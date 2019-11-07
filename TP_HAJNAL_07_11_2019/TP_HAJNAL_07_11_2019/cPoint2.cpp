#include "cPoint2.h"
#include <iostream>
using namespace std;
float cPoint2::getX()
{
	return fX;
}

float cPoint2::getY()
{
	return fY;
}
//seteur
void cPoint2::setX(float fX)
{
	this->fX = fX;
}

void cPoint2::setY(float fY)
{
	this->fY = fY;
}
//init
void cPoint2::init(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}
void cPoint2::deplacement(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}
cPoint2::cPoint2(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}

float cPoint2::abcisse()
{
	return fX;
}

float cPoint2::ordonnee()
{
	return fY;
}


