#pragma once
class cPoint2
{
private:
	// point
	float fX;
	float fY;

public:
	//Prototype ou déclarations 
	float getX();
	float getY();

	void setX(float fX);
	void setY(float fY);

	//init
	void init(float fX, float fY);

	//deplacement
	void deplacement(float fX, float fY);

	//constructeur avecc parametre
	cPoint2(float fX, float fY);
	//affichage
	float abcisse();
	float ordonnee();

};

