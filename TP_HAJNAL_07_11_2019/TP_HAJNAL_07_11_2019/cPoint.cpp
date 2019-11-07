#include "cPoint.h"
#include <iostream>
using namespace std;
float cPoint::getX()
{
	return fX;
}

float cPoint::getY()
{
	return fY;
}
//seteur
void cPoint::setX(float fX)
{
	this->fX = fX;
}

void cPoint::setY(float fY)
{
	this->fY = fY;
}
//init
void cPoint::init(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}
void cPoint::deplacement(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}
cPoint::cPoint(float fX, float fY)
{
	this->fX = fX;
	this->fY = fY;
}

void cPoint::affichage()
{
	cout << "Le point X :" << fX << " le point Y:" << fY << endl;

}

void cPoint::homotesie(float frapport)
{
	this->fX = this->fX * frapport;
	this->fY = this->fY * frapport;
}
void cPoint::rotation(float angle)
{
	fAngle *= 3.141592653589 / 180;
	this->fX = this->fX * cos(fAngle) + this->fY * sin(fAngle);
	this->fY = -this->fY * sin(fAngle) + this->fY * cos(fAngle);
}
