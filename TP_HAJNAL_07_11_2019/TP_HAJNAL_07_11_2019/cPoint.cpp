#include "cPoint.h"
#include <iostream>
using namespace std;
float cPoint::getX()
{
	return nX;
}

float cPoint::getY()
{
	return nY;
}
//seteur
void cPoint::setX(float nX)
{
	this->nX = nX;
}

void cPoint::setY(float nY)
{
	this->nY = nY;
}
//init
void cPoint::init(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}
void cPoint::deplacement(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}
cPoint::cPoint(float nX, float nY)
{
	this->nX = nX;
	this->nY = nY;
}

void cPoint::affichage()
{
	cout << "Le point X :" << nX << " le point Y:" << nY << endl;

}
