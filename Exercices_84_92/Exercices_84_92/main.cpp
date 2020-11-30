#include <stdio.h>
#include <iostream>
#include <math.h>
#include "vecteur3d.h"
#include "vecteur_3d.h"


using namespace std;
int main()
{
   //-----------------------------------------------------------------------
   //Exercice 84
    cout << "Exercice 84\n";
	vecteur_3d vect1(5, 2, 8);
	vecteur_3d vect2(9, 5, 3);

	vect1.operator==(vect2);

	vecteur_3d vect3(0, 9, 7);
	vecteur_3d vect4(0, 9, 7);

	vect3 != vect4;


	cout << "\n";


	//----------------------------------------------------------------------
	//Exercice 85
	cout << "Exercice 85\n";

	vecteur_3d vect5(7.2, 12, 2);
	vecteur_3d vect6(4.3, 6.6, 3);

	vecteur_3d vect7 = vect5 + vect6;
	vecteur_3d vect8 = vect5 * vect6;

	vect3.operator+(vect4);

	cout << "Les coordonees du vecteur 3 sont : " << vect3.getX() << "," << vect3.getY() << "," << vect3.getZ() << "\n";
	cout << "Les coordonees du vecteur 4 sont : " << vect4.getX() << "," << vect4.getY() << "," << vect4.getZ() << "\n";


	//---------------------------------------------------------------------
	//Exercice86

	cout << "\n";
	cout << "Exercice 86\n";
	cout << "\n";

	int n = 0;
	float x = 0;

	vecteur3d vect9(8, 4, 1);

	cout << "Veuillez donner la position de la coordonnee a recuperer (1, 2 ou 3)\n";
	cin >> n;



	x = vect9[n];							//Récupération d'une coordonée du vecteur 9

	cout << "La coordonnee numero "<< n << " est : " << x << "\n";

	vect9[n] = 69.69;						//Méthode de réaffectation d'une valeur de vecteur

	cout << "Valeur reaffectee : " << vect9[n] << "\n";



	//--------------------------------------------------------------------
	//Exercice 89
	vecteur3d vect10(16, 2, 7);
	int val = 0;

	cout << "\n";
	cout << "Exercice 89\n";
	cout << "\n";

	cout << "Veuillez donner la position de la coordonnee a recuperer (1, 2 ou 3)\n";
	cin >> n;

	val = vect10[n];

	cout << "La coordonnee numero " << n << " est : " << val << "\n";

	return 0;
}

