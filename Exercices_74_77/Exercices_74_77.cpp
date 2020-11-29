#include<stdio.h>
#include<iostream>
#include"chose.h"
#include"demo.h"
#include "Point.h"
#include "set_int.h"

int main()
{
	//--------------------------------------------------------------------------------
	//Exercice 74
	std::cout << "Exercice 74\n";
	chose ch1;

	ch1.affichage();

	ch1.~chose();

	chose* adc = new chose;

	//--------------------------------------------------------------------------------
	//Exercice 75
	void fct(demo, demo*);

	std::cout << "Exercice 75\n";

	demo a;
	demo b = 2;
	demo c = a;
	demo* adr = new demo(3, 3);

	fct(a, adr);

	demo* d = new demo(4, 4);
	c = demo(5, 5);

	

	

	//--------------------------------------------------------------------------------
	//Exercice 76
	std::cout << "Exercice 76\n";
	
	point tab[4];

	std::cout << "Le programme detruit des valeurs deja detruite de l'exercice 75\n";



	//--------------------------------------------------------------------------------
	//Exercice 77
	std::cout << "\n Exercice 77\n";
	std::cout << "\n";

	int max = 0, n = 0;

	std::cout << "\n Entrez la taille du tableau\n";
	std::cin >> max;

	set_int int_table(max);

	std::cout << "\n Entrez un chiffre a vérifier \n";
	std::cin >> n;

	int_table.entier(n);	//Permet de tester le nombre de cases du tableau utiliser

	int_table.distinct();	

	set_int table2(int_table);		//Création d'un tableau par copie


	return 0;

}

void fct(demo d, demo* add)
{
	std::cout << "Entree \n";
	delete add;
	std::cout << " Sortie \n";
}




