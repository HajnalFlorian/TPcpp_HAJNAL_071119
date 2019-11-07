#pragma once
class cPoint
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
	cPoint(float fX, float fY);

	//affichage
	void affichage();

	//homotesie
	void homotesie(float frapport);

	//rotation
	void rotation(float fangle);




};

