#include <iostream>
#include <cmath>
#include<stdlib.h>
#include "cPoint.h"
#include "cPoint2.h"
using namespace std; 




int main()
{
	//Exercice 1
	cPoint ptMonPoint(0.0f,0.0f);
	ptMonPoint.affichage();
	ptMonPoint.deplacement(2.0f, 3.0f);
	ptMonPoint.affichage();

	//exercice 2
	cPoint2 ptPoint(0.0f, 0.0f);
	cout << "l'abcisse: " << ptPoint.abcisse() << endl;
	cout << "Ordonnee : " << ptPoint.ordonnee() << endl;
	ptPoint.deplacement(2.2f, 3.3f);
	cout << "l'abcisse: " << ptPoint.abcisse() << endl;
	cout << "Ordonnee : " << ptPoint.ordonnee() << endl;



	system("pause");

	return 0;
}