#pragma once
class cPoint2
{
private:
	// point
	float nX;
	float nY;

public:
	//Prototype ou d�clarations 
	float getX();
	float getY();

	void setX(float nX);
	void setY(float nY);

	//init
	void init(float nX, float nY);

	//deplacement
	void deplacement(float nX, float nY);

	//constructeur avecc parametre
	cPoint2(float nX, float nY);
	//affichage
	float abcisse();
	float ordonnee();

};

